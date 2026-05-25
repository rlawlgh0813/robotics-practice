#!/usr/bin/env python3
from __future__ import annotations

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from builtin_interfaces.msg import Duration


class WaypointActionFollower(Node):
    def __init__(self):
        super().__init__("waypoint_action_follower")

        self.declare_parameter("controller_name", "arm_controller")
        self.declare_parameter("segment_time", 2.0)
        self.declare_parameter("hold_time", 0.5)

        self.controller_name = self.get_parameter("controller_name").value
        self.segment_time = float(self.get_parameter("segment_time").value)
        self.hold_time = float(self.get_parameter("hold_time").value)

        self.joint_names = ["joint1_z", "joint1_y", "joint2", "joint3"]

        # 시작점 -> 4개의 꼭짓점 -> 시작점 복귀
        # joint1_z, joint1_y 값을 중심으로 사각형처럼 보이도록 구성
        self.waypoints = [
            [0.00, 0.30, 0.00, 0.00],   # 시작점
            [0.40, 0.30, 0.00, 0.00],   # 오른쪽
            [0.40, 0.55, 0.00, 0.00],   # 오른쪽 위
            [0.00, 0.55, 0.00, 0.00],   # 왼쪽 위
            [0.00, 0.30, 0.00, 0.00],   # 시작점 복귀
        ]

        self.action_name = f"/{self.controller_name}/follow_joint_trajectory"
        self.client = ActionClient(self, FollowJointTrajectory, self.action_name)

        self._retry_timer = None
        self._hold_timer = None
        self._in_flight = False

        self.get_logger().info(f"Action server: {self.action_name}")
        self._try_send()

    def _build_goal(self) -> FollowJointTrajectory.Goal:
        goal = FollowJointTrajectory.Goal()
        goal.trajectory.joint_names = self.joint_names

        t = 0.0
        for positions in self.waypoints:
            t += self.segment_time

            point = JointTrajectoryPoint()
            point.positions = positions
            point.velocities = [0.0] * len(self.joint_names)
            point.accelerations = [0.0] * len(self.joint_names)

            sec = int(t)
            nanosec = int((t - sec) * 1e9)
            point.time_from_start = Duration(sec=sec, nanosec=nanosec)

            goal.trajectory.points.append(point)

        return goal

    def _try_send(self):
        if self._in_flight:
            return

        if not self.client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info("Waiting for action server...")
            if self._retry_timer is None:
                self._retry_timer = self.create_timer(0.5, self._retry_cb)
            return

        if self._retry_timer is not None:
            self._retry_timer.cancel()
            self._retry_timer = None

        goal = self._build_goal()
        self.get_logger().info(
            f"Send trajectory: {len(goal.trajectory.points)} points, "
            f"segment_time={self.segment_time}s"
        )

        future = self.client.send_goal_async(goal)
        future.add_done_callback(self._on_goal_response)

    def _retry_cb(self):
        self._try_send()

    def _on_goal_response(self, future):
        goal_handle = future.result()
        if goal_handle is None or not goal_handle.accepted:
            self.get_logger().error("Goal rejected")
            self._schedule_next(1.0)
            return

        self._in_flight = True
        self.get_logger().info("Goal accepted. Waiting for result...")
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self._on_result)

    def _on_result(self, future):
        result = future.result()
        self._in_flight = False

        if result is None:
            self.get_logger().error("No result received")
            self._schedule_next(1.0)
            return

        self.get_logger().info(
            f"Trajectory finished. status={result.status}. "
            f"Repeat after {self.hold_time}s"
        )
        self._schedule_next(self.hold_time)

    def _schedule_next(self, delay_sec: float):
        if self._hold_timer is not None:
            self._hold_timer.cancel()
            self._hold_timer = None

        def _callback():
            if self._hold_timer is not None:
                self._hold_timer.cancel()
                self._hold_timer = None
            self._try_send()

        self._hold_timer = self.create_timer(delay_sec, _callback)


def main():
    rclpy.init()
    node = WaypointActionFollower()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()