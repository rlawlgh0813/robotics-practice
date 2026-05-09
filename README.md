# Robotics Practice

ROS 2 기반 로보틱스 학습 기록입니다.
Topic/Service/Action 같은 기본 통신부터 URDF, Gazebo, ros2_control, MoveIt, depth camera, gripper control까지 단계적으로 실습했습니다.

이 저장소는 완성된 제품보다는 **robotics system을 만들기 위해 쌓은 기초 실험과 코드 기록**에 가깝습니다. 이후 [MacGyvBot](https://github.com/MacGyvBot) 프로젝트에서 STT, LLM, GUI, perception, robot control을 하나의 ROS 2 pipeline으로 연결하기 위한 기반 학습입니다.

## Focus

- ROS 2 communication: topic, service, action
- Runtime orchestration: launch, parameter, event handler
- Robot modeling: URDF, Xacro, TF, robot_state_publisher
- Simulation/control: Gazebo, ros2_control, trajectory controller
- Motion planning: MoveIt, FollowJointTrajectory, waypoint motion
- Perception basics: RealSense depth image, camera intrinsics, pixel-to-3D projection
- Manipulation practice: Doosan M0609, MoveItPy, OnRobot RG2 gripper

## Repository Structure

```text
robotics-practice/
├── class/
│   ├── class02/   # ROS 2 topic, pub/sub, turtlesim goal follower
│   ├── class03/   # service/client, custom service workflow
│   ├── class04/   # action server/client, turtlesim patrol action
│   ├── class05/   # launch, substitution, event handler, parameter
│   ├── class06/   # URDF, Xacro, robot_state_publisher
│   ├── class07/   # Gazebo, ros2_control, effort controller
│   ├── class08/   # joint trajectory controller, waypoint sequence
│   ├── class09/   # MoveIt config, FollowJointTrajectory action
│   └── class10/   # RealSense depth viewer, pixel depth to XYZ
├── dsr/
│   └── dsr_practice/
│       ├── dsr_practice/   # MoveItPy and gripper practice code
│       ├── launch/         # example launch files
│       └── config/         # MoveItPy config
└── README.md
```

## Practice Map

| Area | What I built |
| --- | --- |
| ROS 2 Topic | Publisher/subscriber nodes and turtlesim feedback control |
| ROS 2 Service | Basic service/client and custom shopping-order service flow |
| ROS 2 Action | Fibonacci action and turtlesim waypoint patrol action |
| Launch / Parameter | Launch arguments, substitutions, process events, dynamic parameters |
| URDF / Xacro | Simple arm model, reusable xacro macros, TF visualization |
| Gazebo / ros2_control | Simulated arm spawn, joint state broadcaster, effort controller |
| Trajectory Control | `JointTrajectory` command publisher and waypoint sequencer |
| MoveIt | MoveIt config package, controller integration, trajectory action client |
| Depth Camera | RealSense image subscription, depth reading, camera-coordinate calculation |
| DSR / Manipulation | Doosan M0609 MoveItPy planning, collision object, RG2 gripper, pick-and-place flow |

## Class Notes

각 class 폴더에는 실습 코드와 `notes.md`를 함께 둡니다.

- `class02`: ROS 2 topic과 turtlesim 목표 추종
- `class03`: service/client와 custom interface
- `class04`: action server/client와 waypoint patrol
- `class05`: launch system과 runtime parameter
- `class06`: URDF/Xacro 기반 robot description
- `class07`: Gazebo spawn과 ros2_control 적용
- `class08`: trajectory controller로 joint command 발행
- `class09`: MoveIt 설정과 FollowJointTrajectory action 사용
- `class10`: RealSense depth image를 이용한 pixel depth/XYZ 계산

## DSR / MoveIt Practice

`dsr/dsr_practice`에서는 Doosan M0609 로봇팔을 대상으로 MoveItPy 기반 motion planning을 실습했습니다.

| File | Description |
| --- | --- |
| `mp_basic.py` | HOME joint pose 이동 후 end-effector pose goal로 이동 |
| `mp_waypoint.py` | 여러 waypoint를 순차적으로 계획하고 실행 |
| `mp_waypoint_pilz.py` | Pilz industrial motion planner 기반 PTP waypoint motion |
| `collision_obstacle.py` | planning scene에 collision object를 추가하고 회피 경로 계획 |
| `pick_and_place.py` | RG2 gripper를 포함한 pick-and-place sequence |
| `gripper.py` | gripper open/close command helper |
| `onrobot.py` | OnRobot RG2 TCP command wrapper |
| `gripper_open_close_test.py` | RG2 open/close manual test |
| `gripper_width_test.py` | RG2 width feedback manual test |

## Cleanup Policy

이 저장소에는 source code, launch/config, notes만 남기는 방향으로 정리했습니다.
`build/`, `install/`, `log/`, `__pycache__/` 같은 generated files는 `.gitignore`로 제외합니다.

```bash
colcon build
source install/setup.bash
```

빌드가 필요하면 각 workspace 안에서 위 흐름으로 다시 생성합니다.

## Environment

- OS: Ubuntu 22.04
- ROS 2: Humble
- Language: Python, C++
- Build tool: colcon
- Simulation: Gazebo, RViz
- Planning/control: MoveIt, MoveItPy, ros2_control
- Hardware target/practice: Doosan M0609, OnRobot RG2, RealSense depth camera

## What This Repository Shows

이 레포는 로봇 소프트웨어를 단일 알고리즘이 아니라 여러 node, topic, action, controller, sensor stream이 연결된 **system**으로 이해해 가는 과정을 보여줍니다.

처음에는 ROS 2 communication과 Linux/launch 기반 실행 흐름을 익히고, 이후 Gazebo/MoveIt/perception 실습으로 확장했습니다. 이 흐름은 현재 진행 중인 로봇 프로젝트에서 음성 명령과 LLM, GUI, vision, robot arm control을 하나의 pipeline으로 묶기 위한 기반입니다.
