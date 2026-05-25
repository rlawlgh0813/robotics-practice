# ROS 2 Learning Notes

## Purpose

ROS 2의 통신 구조부터 시뮬레이션 로봇의 궤적 제어와 depth perception까지 단계적으로 실습한 기록입니다. 개별 수업의 상세 기록은 각 `classXX/notes.md`에 두고, 이 문서는 전체 학습 흐름을 포트폴리오 관점에서 요약합니다.

## Progress

| Class | Topic | Practice Outcome |
| --- | --- | --- |
| Class 02 | Topic / Pub-Sub | custom publisher/subscriber와 turtlesim goal follower 작성 |
| Class 03 | Service / Interface | service-client 흐름 및 주문 처리 형태의 custom service 구성 |
| Class 04 | Action | waypoint patrol action server/client 구현 |
| Class 05 | Launch / Parameter | multi-node launch, substitution, event handler, runtime parameter 실습 |
| Class 06 | URDF / Xacro | robot description 작성 및 RViz/TF 시각화 |
| Class 07 | Gazebo / ros2_control | simple arm spawn과 controller 연결 |
| Class 08 | Trajectory | `JointTrajectory` 기반 waypoint 제어 |
| Class 09 | MoveIt | MoveIt config와 `FollowJointTrajectory` action 연결 |
| Class 10 | Depth Camera | image/depth topic 구독 및 pixel-to-3D 계산 |

## What I Implemented

### Communication and Runtime

- ROS 2 node, topic, service, action의 역할을 작은 패키지 단위로 구현했습니다.
- launch file과 parameter를 이용해 여러 node를 실행하고 동작 값을 런타임에서 제어했습니다.

### Robot Modeling and Control

- URDF 및 Xacro로 관절 구조를 표현하고 `robot_state_publisher`와 RViz로 모델을 확인했습니다.
- Gazebo에 로봇을 spawn한 뒤 `ros2_control` controller를 붙여 command가 실제 joint motion으로 이어지는 과정을 실습했습니다.
- 단순 trajectory publish에서 MoveIt planning 및 action 기반 실행까지 확장했습니다.

### Perception

- RealSense color/depth stream을 ROS 2 image topic으로 수신하고 OpenCV 화면과 연결했습니다.
- 카메라 내부 파라미터 `fx`, `fy`, `cx`, `cy`와 depth 값을 이용해 클릭한 pixel의 camera coordinate `(X, Y, Z)`를 산출했습니다.
- 추가 학습 자료로 depth camera calibration과 OpenCV 연계 흐름을 확인하여, 인식 기반 pick-and-place로 이어질 기반을 정리했습니다.

## Connection to Next Tracks

ROS 2에서 학습한 message/action/controller 구조는 `dsr/`의 실제 협동로봇 manipulation 실습으로 이어집니다. Gazebo에서 다진 시뮬레이션 경험은 `isaacsim/`에서 USD/PhysX와 고품질 가상 센서를 활용하는 digital twin 학습으로 확장됩니다.
