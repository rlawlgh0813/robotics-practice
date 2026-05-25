import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64MultiArray

STOP_THRESHOLD = 0.8  # rad


class AutoStop(Node):
    def __init__(self):
        super().__init__('auto_stop')

        # /joint_states 구독
        self.sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_cb,
            10
        )

        # /effort_controller/commands 퍼블리셔
        self.pub = self.create_publisher(
            Float64MultiArray,
            '/effort_controller/commands',
            10
        )

        # 0.5초마다 현재 joint3 위치 출력
        self.timer = self.create_timer(0.5, self.log_cb)

        self.joint3_pos = 0.0
        self.stopped = False

    def joint_cb(self, msg):
        # joint3 position 찾기
        if 'joint3' in msg.name:
            idx = msg.name.index('joint3')
            self.joint3_pos = msg.position[idx]

        # 임계값 초과 시 토크 해제 후 종료
        if not self.stopped and abs(self.joint3_pos) > STOP_THRESHOLD:
            self.stopped = True

            stop_msg = Float64MultiArray()
            stop_msg.data = [0.0, 0.0, 0.0, 0.0]
            self.pub.publish(stop_msg)

            self.get_logger().info(
                f'[AUTO STOP] joint3 = {self.joint3_pos:.3f} rad 도달 → 전체 토크 해제'
            )

            raise SystemExit

    def log_cb(self):
        if not self.stopped:
            self.get_logger().info(f'joint3 현재 위치: {self.joint3_pos:.3f} rad')


def main():
    rclpy.init()
    node = AutoStop()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()