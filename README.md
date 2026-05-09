# Robotics Practice

ROS 2 기반 로보틱스 프로그래밍을 학습하며 정리한 실습 저장소입니다.

Topic, Service, Action, Launch, Parameter 같은 ROS 2 기본 통신 구조부터 URDF/Xacro, Gazebo, ros2_control, MoveItPy 기반 로봇팔 경로 계획까지 단계적으로 실습했습니다.

## Overview

이 저장소는 단순한 수업 기록이 아니라, ROS 2 시스템이 어떻게 여러 노드와 메시지 흐름으로 구성되는지 직접 구현하며 이해하기 위한 학습 기록입니다.

주요 관심사는 다음과 같습니다.

- ROS 2 node 간 통신 구조 이해
- 시뮬레이션 환경에서 로봇 모델 구성 및 제어
- 로봇팔 motion planning과 안전 작업 영역 설정
- 실제 로봇 프로젝트로 확장하기 위한 기초 실습

## What I Practiced

| Area | Practice |
| --- | --- |
| ROS 2 Communication | Publisher/Subscriber, Service/Client, Action Server/Client |
| Runtime Control | Launch system, launch substitution, event handler, dynamic parameter |
| Robot Description | URDF, Xacro, robot_state_publisher, joint_state_publisher |
| Simulation | Gazebo spawn, ros2_control, controller loading |
| Motion Planning | MoveItPy planning, waypoint motion, collision object, Pilz PTP |
| Manipulation | Doosan M0609 planning practice, OnRobot RG2 gripper, pick-and-place flow |

## Repository Structure

```text
robotics-practice/
├── class/
│   ├── class02/   # ROS 2 Topic, pub/sub, turtlesim goal follower
│   ├── class03/   # Service server/client, custom service workflow
│   ├── class04/   # Action server/client, turtlesim patrol action
│   ├── class05/   # Launch, substitution, event handler, parameter control
│   ├── class06/   # URDF, Xacro, robot_state_publisher
│   ├── class07/   # Gazebo, ros2_control, simple arm simulation
│   └── class09/   # Additional class notes
├── dsr/
│   └── dsr_practice/
│       ├── dsr_practice/
│       │   ├── mp_basic.py
│       │   ├── mp_waypoint.py
│       │   ├── mp_waypoint_pilz.py
│       │   ├── collision_obstacle.py
│       │   ├── pick_and_place.py
│       │   ├── gripper.py
│       │   └── onrobot.py
│       ├── launch/
│       └── config/
└── project/
```

## Class Practice

### ROS 2 Topic

Publisher와 Subscriber 노드를 직접 작성하고, turtlesim의 pose와 cmd_vel topic을 이용해 목표 좌표로 이동하는 기본 제어 흐름을 구현했습니다.

학습 내용:

- Python `rclpy` 기반 node 작성
- topic publish/subscribe 구조
- pose feedback을 이용한 velocity command 생성
- turtlesim 기반 목표 추종 실습

### ROS 2 Service

요청-응답 기반 통신 구조를 이해하기 위해 기본 Service와 custom Service를 구현했습니다.

학습 내용:

- `example_interfaces/srv/AddTwoInts` 기반 service server/client
- `CheckStock`, `AuthorizePayment`, `PlaceOrder`, `DiscountApply` 같은 custom service 흐름
- 여러 service를 조합해 하나의 주문 처리 workflow 구성

### ROS 2 Action

실행 시간이 긴 작업을 다루기 위해 Action server/client를 구현했습니다.

학습 내용:

- custom action interface 정의
- goal, feedback, result 흐름 이해
- 피보나치 action server/client 구현
- turtlesim waypoint patrol action 구현

### Launch / Parameter

여러 노드를 함께 실행하고 runtime 설정을 제어하는 launch와 parameter를 실습했습니다.

학습 내용:

- launch file 작성
- launch substitution과 argument 전달
- event handler 기반 실행 순서 제어
- dynamic parameter callback
- turtlesim mode, speed, enable parameter 제어

### URDF / Xacro / Gazebo

로봇 모델을 정의하고 시뮬레이션 환경에서 동작시키기 위한 기초를 실습했습니다.

학습 내용:

- URDF link, joint, origin, material 구조
- Xacro property/macro를 이용한 반복 구조 정리
- robot_state_publisher와 joint_state_publisher
- Gazebo model spawn
- ros2_control과 effort controller 설정

## DSR / MoveIt Practice

`dsr/dsr_practice`에서는 Doosan M0609 로봇팔을 대상으로 MoveItPy 기반 motion planning 실습을 정리했습니다.

### Implemented Examples

| File | Description |
| --- | --- |
| `mp_basic.py` | HOME joint pose 이동 후 end-effector pose goal로 이동 |
| `mp_waypoint.py` | 여러 waypoint를 순차적으로 계획하고 실행 |
| `mp_waypoint_pilz.py` | Pilz industrial motion planner 기반 PTP waypoint motion |
| `collision_obstacle.py` | planning scene에 collision object를 추가하고 회피 경로 계획 |
| `pick_and_place.py` | RG2 gripper와 함께 gear pick-and-place sequence 구성 |
| `gripper.py`, `onrobot.py` | OnRobot RG2 gripper 제어 실습 |

### Focus Points

- `MoveItPy` planning component 사용
- joint goal과 pose goal 기반 motion planning
- waypoint 기반 순차 이동
- OMPL / Pilz planner parameter 설정
- 작업 공간 안전 범위 clamp
- collision object 추가
- gripper open/close와 pick-and-place sequence 구성

## Environment

- OS: Ubuntu 22.04
- ROS 2: Humble
- Language: Python, C++
- Build Tool: colcon
- Simulation: Gazebo, RViz
- Robot / Planning: Doosan M0609, MoveItPy
- Gripper: OnRobot RG2

## What This Repository Shows

이 저장소는 ROS 2를 처음부터 사용해 보며 로봇 소프트웨어의 기본 구조를 이해해 가는 과정을 보여줍니다.

특히 단순히 노드를 실행하는 수준을 넘어, 여러 노드를 launch로 묶고, parameter로 동작을 제어하고, URDF/Gazebo를 통해 로봇 모델을 구성하고, MoveItPy로 로봇팔 경로를 계획하는 흐름까지 확장했습니다.

이후 진행 중인 [MacGyvBot](https://github.com/MacGyvBot) 프로젝트에서 음성 명령, perception, robot arm control을 하나의 ROS 2 pipeline으로 연결하는 기반이 되는 학습 저장소입니다.
