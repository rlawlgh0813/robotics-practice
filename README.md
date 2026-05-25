# Robotics Practice

ROS 2에서 시작해 로봇 모델링, 시뮬레이션, 모션 플래닝, 센서 처리, 그리고 Isaac Sim 기반 디지털 트윈으로 학습 범위를 넓혀 가는 기록입니다.

이 저장소는 로봇 소프트웨어 시스템을 이해하기 위해 직접 구현하고 실습한 코드와 학습 노트를 정리한 포트폴리오입니다. Topic/Service/Action 통신을 바탕으로 Gazebo와 MoveIt에서 로봇을 제어하고, Depth Camera 및 Isaac Sim 센서/공정 환경으로 perception과 digital twin 영역까지 확장하고 있습니다.

## Learning Roadmap

| Track | Learning Focus | Evidence |
| --- | --- | --- |
| ROS 2 Fundamentals | Topic, Service, Action, Launch, Parameter | [`ros2/note.md`](ros2/note.md), `ros2/class02` - `class05` |
| Robot Model & Simulation | URDF, Xacro, Gazebo, ros2_control | `ros2/class06` - `class08` |
| Planning & Perception | MoveIt, depth camera, calibration | `ros2/class09` - `class12` |
| Manipulation & HRI | Doosan M0609, RG2, pick-and-place, STT control | `ros2/class11` - `class13`, [`dsr/note.md`](dsr/note.md) |
| Digital Twin | USD, PhysX, scripting, automation, virtual sensors | [`isaacsim/note.md`](isaacsim/note.md), `isaacsim/class01` - `class05` |

## Repository Structure

```text
robotics-practice/
|-- ros2/
|   |-- note.md       # ROS 2 학습 흐름 요약
|   `-- class02-13/   # 통신부터 STT-로봇 연동까지 실습 코드/노트
|-- dsr/
|   |-- note.md       # 협동로봇 조작 및 응용 학습 요약
|   `-- dsr_practice/ # Doosan/MoveItPy/그리퍼 실습 코드
|-- isaacsim/
|   |-- note.md       # Isaac Sim 학습 흐름 요약
|   `-- class01-05/   # USD, scripting, 자동화, 센서 예제/노트
`-- README.md
```

## Highlights

### ROS 2 to Motion Planning

- Publisher/subscriber, service/client, action server/client를 직접 구성하며 ROS 2 node 간 통신 방식을 실습했습니다.
- URDF/Xacro 모델을 Gazebo에 올리고 `ros2_control` 및 trajectory controller로 관절 동작을 제어했습니다.
- MoveIt config와 `FollowJointTrajectory` action을 연결해 계획된 waypoint motion으로 확장했습니다.

### Perception and Manipulation

- RealSense color/depth image를 구독하고 pixel depth와 camera intrinsics를 이용해 3D 좌표를 계산했습니다.
- Doosan M0609와 OnRobot RG2 환경에서 MoveItPy 기반 경로 계획, 충돌 회피, pick-and-place 흐름을 실습했습니다.
- Depth camera calibration과 click-to-pick, STT 기반 명령 제어까지 perception/manipulation 연계를 확장했습니다.

### Isaac Sim Progress

- USD 기반 scene 구성, PhysX 물리 적용, 공정 설비 및 로봇 import 개념을 학습했습니다.
- OmniGraph 및 Python scripting API를 이용한 자동화 흐름과 Isaac Sim camera, LiDAR, IMU, contact sensor 활용 방식을 정리했습니다.
- `class03-05`에는 scene scripting, manipulator automation, virtual sensor Python 예제를 함께 정리했습니다.

## Environment

- ROS 2 Humble / Ubuntu 22.04
- Python, ROS 2 package, colcon
- Gazebo, RViz, ros2_control, MoveIt / MoveItPy
- Doosan M0609, OnRobot RG2, RealSense Depth Camera
- NVIDIA Isaac Sim: USD, PhysX, OmniGraph, sensor simulation

## Repository Policy

이 저장소에는 수업에서 다룬 실습 코드와 제가 정리한 학습 노트를 중심으로 게시합니다. 강의 원본 PDF/압축파일과 생성 산출물(`build/`, `install/`, `log/`)은 소스 트리에서 제외합니다.
