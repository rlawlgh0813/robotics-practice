# Class 08

## Joint Trajectory Control

Class 08에서는 `ros2_control`이 적용된 simple arm을 `JointTrajectory` 메시지로 움직이는 실습을 했다.

이전 단계에서 Gazebo에 모델을 spawn하고 controller를 올리는 데 집중했다면, 이번 단계에서는 실제로 controller topic에 목표 joint position을 보내 로봇팔 자세를 바꾸는 흐름을 확인했다.

## Workspace

```text
class08/gazebo_ws/src/simple_arm_description/
├── config/controllers.yaml
├── launch/display_launch.py
├── launch/gazebo_spawn_launch.py
├── simple_arm_description/
│   ├── state_monitor.py
│   ├── trajectory_publisher.py
│   └── waypoint_sequencer.py
└── urdf/
    ├── simple_arm.urdf
    └── simple_arm.urdf.xacro
```

## Main Practice

### `trajectory_publisher.py`

`/joint_trajectory_controller/joint_trajectory` topic으로 한 번의 목표 자세를 발행한다.

- joint names: `joint1_z`, `joint1_y`, `joint2`, `joint3`
- message type: `trajectory_msgs/msg/JointTrajectory`
- target: `[0.5, 0.3, -0.5, 0.2]`
- time from start: 2 seconds

이 실습으로 trajectory controller가 단순 effort command와 다르게 목표 자세와 시간을 함께 받아 움직인다는 점을 확인했다.

### `waypoint_sequencer.py`

여러 waypoint를 순서대로 발행해 simple arm이 단계적으로 움직이도록 만들었다.

- home pose에서 시작
- `joint1_z`, `joint1_y`, `joint2`, `joint3` 값을 순차적으로 변경
- 각 waypoint 사이에 짧은 대기 시간을 둠
- 마지막 waypoint 이후 node 종료

## Learned

- `JointTrajectory` 메시지 구조
- controller topic에 joint command를 publish하는 흐름
- waypoint 기반 motion sequence 구성
- Gazebo model, controller, ROS 2 node가 연결되는 방식
