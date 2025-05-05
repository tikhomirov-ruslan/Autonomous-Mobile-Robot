#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
from std_msgs.msg import String

import cv2
import mediapipe as mp


class HandTrackerNode(Node):
    def __init__(self):
        super().__init__('hand_tracker_node')

        # ROS publishers
        self.position_pub = self.create_publisher(Point, '/hand_tracker/position', 10)
        self.gripper_pub = self.create_publisher(String, '/hand_tracker/gripper_cmd', 10)

        # Mediapipe hands model
        self.mp_hands = mp.solutions.hands
        self.hands = self.mp_hands.Hands(static_image_mode=False,
                                         max_num_hands=1,
                                         min_detection_confidence=0.7,
                                         min_tracking_confidence=0.6)
        self.mp_drawing = mp.solutions.drawing_utils

        # Webcam
        self.cap = cv2.VideoCapture(0)
        if not self.cap.isOpened():
            self.get_logger().error("Unable to open webcam")
            rclpy.shutdown()
            return

        # Timer for processing
        self.timer = self.create_timer(0.1, self.process_frame)

        self.get_logger().info("Hand Tracker Node started")

    def process_frame(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().warning("Failed to capture frame")
            return

        # Flip for natural interaction and convert color
        frame = cv2.flip(frame, 1)
        rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        result = self.hands.process(rgb_frame)

        if result.multi_hand_landmarks:
            hand_landmarks = result.multi_hand_landmarks[0]

            # Определим координаты запястья (точка 0)
            wrist = hand_landmarks.landmark[self.mp_hands.HandLandmark.WRIST]

            # Преобразуем в миллиметры (или масштабируем экран)
            x_mm = (wrist.x - 0.5) * 400  # смещаем от центра и масштабируем
            y_mm = (0.5 - wrist.y) * 400
            z_mm = (0.5 - wrist.z) * 400  # z здесь не глубина, но используем как относительное

            point = Point()
            point.x = float(x_mm)
            point.y = float(y_mm)
            point.z = float(z_mm)

            self.position_pub.publish(point)

            # Определение жеста: захват (если кончики пальцев ближе к ладони)
            thumb_tip = hand_landmarks.landmark[self.mp_hands.HandLandmark.THUMB_TIP]
            index_tip = hand_landmarks.landmark[self.mp_hands.HandLandmark.INDEX_FINGER_TIP]
            middle_tip = hand_landmarks.landmark[self.mp_hands.HandLandmark.MIDDLE_FINGER_TIP]
            ring_tip = hand_landmarks.landmark[self.mp_hands.HandLandmark.RING_FINGER_TIP]
            pinky_tip = hand_landmarks.landmark[self.mp_hands.HandLandmark.PINKY_TIP]

            palm_base = hand_landmarks.landmark[self.mp_hands.HandLandmark.PALM_BASE \
                if hasattr(self.mp_hands.HandLandmark, 'PALM_BASE') else 0]

            # Простой детектор: если все пальцы ближе к запястью — это "grab"
            if all(abs(f.y - wrist.y) < 0.1 for f in [index_tip, middle_tip, ring_tip, pinky_tip]):
                cmd = String(data='grab')
            else:
                cmd = String(data='release')

            self.gripper_pub.publish(cmd)

            self.get_logger().info(f"Published position: x={point.x:.1f}, y={point.y:.1f}, z={point.z:.1f} | cmd={cmd.data}")

            # Отрисовка
            self.mp_drawing.draw_landmarks(frame, hand_landmarks, self.mp_hands.HAND_CONNECTIONS)

        cv2.imshow("Hand Tracker", frame)
        cv2.waitKey(1)

    def destroy_node(self):
        self.cap.release()
        cv2.destroyAllWindows()
        super().destroy_node()


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


if __name__ == '__main__':
    main()

