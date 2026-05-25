# Isaac Sim Learning Notes

## Purpose

기존 ROS 2/Gazebo 기반 로봇 제어 학습을 NVIDIA Isaac Sim의 digital twin 및 sensor simulation 영역으로 확장한 진도 기록입니다. 공정 환경을 가상으로 구성하고 물리 및 센서 데이터를 활용해 실제 로봇 task를 검증하는 방향을 학습하고 있습니다.

## Learning Progress

| Topic | Learned Concept | Portfolio Relevance |
| --- | --- | --- |
| Digital Twin / USD | USD scene graph와 asset 기반 환경 표현 | 로봇과 설비를 재사용 가능한 가상 공정으로 구성 |
| Asset Import / PhysX | 로봇 및 공장 설비 import, 물리 속성 적용 | 충돌과 동작을 고려한 simulation environment 구축 |
| Factory Environment | 공정 설비 배치와 물리 적용 | manipulation 작업 공간 설계 및 검증 |
| OmniGraph | graph 기반 동작/데이터 흐름 구성 | 센서-제어 pipeline 자동화 |
| Python Scripting API | Python 기반 scene 및 robot automation | 반복 가능한 시뮬레이션 실험 작성 |
| Camera Sensor | pinhole/fisheye camera, depth camera 개념 | vision/perception 알고리즘 입력 생성 |
| LiDAR / IMU / Contact Sensor | 거리, 자세, 접촉 데이터 생성 | navigation 및 조작 task의 상태 관측 |

## Course Sequence Summary

### Scene and Physics

- Digital twin과 USD의 역할을 이해하고, 공정 환경을 구성하는 asset 단위의 접근을 학습했습니다.
- Isaac Sim에 로봇과 공장 설비를 import하고 PhysX 기반 물리 특성을 적용하는 흐름을 다뤘습니다.
- 설비 배치, collision, 물리 시뮬레이션을 고려한 공정 환경 구성으로 범위를 넓혔습니다.

### Automation

- OmniGraph를 활용한 데이터/동작 연결 방식을 익혔습니다.
- Python scripting API와 manipulator tutorial 흐름을 통해 scene 및 로봇 task를 스크립트로 자동화하는 접근을 학습했습니다.

### Virtual Sensors

- camera sensor의 pinhole/fisheye 모델과 depth camera 응용을 학습했습니다.
- rotating LiDAR RTX, IMU, contact sensor를 통해 가상 환경에서 관측 데이터를 생성하는 방식을 확인했습니다.
- ROS 2에서 실습한 depth image 처리 및 manipulation 흐름과 결합하면, 실제 장비 투입 전 synthetic sensor data 기반 검증으로 이어질 수 있습니다.

## Relation to Existing Practice

| Previous Practice | Isaac Sim Extension |
| --- | --- |
| Gazebo에서 URDF 로봇 spawn | USD asset 기반 로봇/공정 환경 구성 |
| `ros2_control` 및 MoveIt motion | 물리 환경에서 manipulation task 검증 |
| RealSense depth image 처리 | 가상 camera/depth sensor 데이터 생성 |
| Doosan pick-and-place | digital twin 공정 자동화 시나리오 확장 |

## Next Study Direction

- Isaac Sim scene에서 로봇과 센서가 포함된 작은 pick-and-place 공정 재현
- synthetic camera/depth 결과를 ROS 2 perception node와 연결
- motion planning 결과와 contact/collision 상태를 함께 기록하는 검증 pipeline 구성

## Publishing Note

강의 원본 문서 및 배포 압축파일은 로컬 참고자료로 보존하고, 공개 저장소에는 학습 내용을 재구성한 본 노트와 직접 작성한 실습 결과를 중심으로 관리합니다.
