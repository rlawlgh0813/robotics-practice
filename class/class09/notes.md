# Class 09

## MoveIt / FollowJointTrajectory

Class 09에서는 simple arm에 MoveIt 설정을 붙이고, controller action을 통해 waypoint trajectory를 실행하는 흐름을 실습했다.

Class 08이 controller topic에 직접 `JointTrajectory`를 publish하는 방식이었다면, Class 09는 MoveIt config와 `FollowJointTrajectory` action을 연결해 planning/control 구조에 더 가까운 형태로 확장했다.

## Workspace

```text
class09/gazebo_ws/src/
├── simple_arm_description/
│   ├── config/controllers.yaml
│   ├── launch/
│   └── urdf/
│       ├── simple_arm_core.urdf.xacro
│       ├── simple_arm_gazebo.ros2_control.xacro
│       └── simple_arm_moveit.urdf.xacro
├── simple_arm_moveit/
│   ├── config/
│   │   ├── joint_limits.yaml
│   │   ├── kinematics.yaml
│   │   ├── moveit_controllers.yaml
│   │   └── simple_arm.srdf
│   └── launch/
└── simple_arm_trajectory/
    └── simple_arm_trajectory/
        ├── controller_state_monitor.py
        ├── repeat_monitor.py
        ├── send_waypoint.py
        ├── trajectory_monitor.py
        └── waypoint_action_follower.py
```

## Main Practice

### MoveIt config

`simple_arm_moveit` 패키지에는 MoveIt Setup Assistant로 만든 설정이 들어 있다.

- planning group 정의
- joint limits 설정
- kinematics 설정
- ros2_control controller 연결
- RViz/MoveIt launch 구성

### `waypoint_action_follower.py`

`control_msgs/action/FollowJointTrajectory` action client를 작성해 controller action server에 trajectory goal을 보낸다.

- action name: `/{controller_name}/follow_joint_trajectory`
- default controller: `arm_controller`
- waypoint list를 `JointTrajectoryPoint`로 변환
- action server 연결 대기 후 goal 전송
- result를 받은 뒤 일정 시간 후 반복 실행

## Learned

- MoveIt package가 robot description, SRDF, controller config와 연결되는 방식
- topic command와 action command의 차이
- `FollowJointTrajectory` goal 구성 방식
- controller action server의 goal/feedback/result 흐름
- simulation, MoveIt, controller를 함께 실행할 때 launch 구성이 중요하다는 점
