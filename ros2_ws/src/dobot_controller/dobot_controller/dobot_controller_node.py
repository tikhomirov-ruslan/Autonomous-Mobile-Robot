#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point, Pose
from std_msgs.msg import String


class DobotController(Node):
    def __init__(self):
        super().__init__('dobot_controller_node')

        # Подписка на координаты руки от hand_tracker
        self.subscription = self.create_subscription(
            Point,
            '/hand_tracker/position',
          #  self.hand_position_callback,
            self.listener_callback,
            10
        )

        # Подписка на команду захвата/отпуска
        self.gripper_sub = self.create_subscription(
            String,
            '/hand_tracker/gripper_cmd',
            self.gripper_callback,
            10
        )

        # Публикация позиции для Dobot Magician
        self.dobot_pub = self.create_publisher(Pose, '/dobot/target_pose', 10)

        # Публикация команд захвата/отпуска
        self.gripper_pub = self.create_publisher(String, '/dobot/gripper_cmd', 10)

        self.get_logger().info("Dobot Controller Node started")

    def listener_callback(self, msg: Point):
        # Преобразуем координаты руки в Pose для Dobot
        pose = Pose()
        pose.position.x = float(msg.x)
        pose.position.y = float(msg.y)
        pose.position.z = float(msg.z)

        # Задаем ориентацию по умолчанию (можно изменить)
        pose.orientation.x = 0.0
        pose.orientation.y = 0.0
        pose.orientation.z = 0.0
        pose.orientation.w = 1.0

        self.get_logger().info(
            f"Sending position to Dobot: x={msg.x:.2f}, y={msg.y:.2f}, z={msg.z:.2f}"
        )

        self.dobot_pub.publish(pose)
        
        self.dobot.move_to(x=msg.x, y=msg.y, z=msg.z)


    def gripper_callback(self, msg: String):
        cmd = msg.data.lower()
        if cmd in ['grab', 'release']:
            self.get_logger().info(f"Sending gripper command: {cmd}")
            self.gripper_pub.publish(String(data=cmd))
        else:
            self.get_logger().warn(f"Unknown gripper command: {cmd}")


def main(args=None):
    rclpy.init(args=args)
    node = DobotController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

