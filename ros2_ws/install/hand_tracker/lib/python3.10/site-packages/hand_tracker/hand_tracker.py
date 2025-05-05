import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Pose
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import mediapipe as mp
import numpy as np

class HandTrackerNode(Node):
    def __init__(self):
        super().__init__('hand_tracker_node')
        self.bridge = CvBridge()
        self.image_sub = self.create_subscription(
            Image, '/camera/image_raw', self.image_callback, 10)

        self.pose_pub = self.create_publisher(Pose, '/hand_target_pose', 10)
        self.cmd_pub = self.create_publisher(String, '/hand_command', 10)

        self.hands = mp.solutions.hands.Hands(
            max_num_hands=1,
            min_detection_confidence=0.7,
            min_tracking_confidence=0.5)

        self.get_logger().info("Hand Tracker Node started.")

    def image_callback(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = self.hands.process(rgb)

        if results.multi_hand_landmarks:
            hand = results.multi_hand_landmarks[0].landmark

            # Координаты ладони (запястье)
            x = hand[0].x
            y = hand[0].y
            z = hand[0].z

            # Преобразуем в координаты Dobot (примерно)
            pose = Pose()
            pose.position.x = 0.2 + (x - 0.5) * 0.4
            pose.position.y = (y - 0.5) * -0.4
            pose.position.z = 0.05 + (z + 0.1) * 0.3
            pose.orientation.w = 1.0  # без вращения

            self.pose_pub.publish(pose)
            self.get_logger().info(f"Published pose: x={pose.position.x:.2f}, y={pose.position.y:.2f}, z={pose.position.z:.2f}")

            # Определим: сжат ли кулак
            is_closed = all(hand[i].y > hand[i - 2].y for i in [8, 12, 16, 20])
            command = "grab" if is_closed else "release"
            self.cmd_pub.publish(String(data=command))
            self.get_logger().info(f"Command: {command}")

        cv2.imshow("Hand Tracker", frame)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = HandTrackerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()

if __name__ == '__main__':
    main()

