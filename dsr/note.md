# Doosan Robot Manipulation Notes

## Purpose

Doosan M0609 협동로봇과 OnRobot RG2 gripper를 대상으로, ROS 2와 MoveItPy를 이용해 산업용 manipulation 흐름을 익힌 기록입니다.

## Practice Scope

| Area | Content |
| --- | --- |
| Motion Planning | MoveItPy를 이용한 joint/pose goal 이동과 waypoint 계획 |
| Industrial Motion | Pilz planner 기반 PTP waypoint 실행 |
| Safety in Planning | planning scene에 collision object를 추가하고 우회 경로 계획 |
| End Effector | RG2 gripper open/close 및 width 확인 |
| Task Sequence | approach, grip, transfer, release를 포함한 pick-and-place 흐름 |

## Code Evidence

| File | Description |
| --- | --- |
| `dsr_practice/dsr_practice/mp_basic.py` | 기본 joint/pose goal motion planning |
| `dsr_practice/dsr_practice/mp_waypoint.py` | 여러 waypoint를 순차 실행하는 motion |
| `dsr_practice/dsr_practice/mp_waypoint_pilz.py` | Pilz 기반 산업용 motion planning |
| `dsr_practice/dsr_practice/collision_obstacle.py` | 충돌 물체를 고려한 경로 계획 |
| `dsr_practice/dsr_practice/pick_and_place.py` | 그리퍼를 포함한 pick-and-place sequence |
| `dsr_practice/dsr_practice/onrobot.py` | RG2 제어 통신 wrapper |

## Extended Learning

- Depth camera와 OpenCV, calibration 수업을 통해 perception 좌표를 manipulation target으로 변환하는 과정을 학습했습니다.
- STT-로봇 연동 수업을 통해 음성 명령을 로봇 task 호출로 연결하는 응용 방향을 살펴보았습니다.
- 이 흐름은 센서 기반 물체 선택, 자연어/음성 명령, 로봇 팔 동작을 하나의 ROS 2 pipeline으로 엮는 프로젝트로 확장할 수 있습니다.

## Related Classes

실습 진도별 코드 스냅샷과 노트는 `ros2/class11`(MoveItPy/pick-and-place), `ros2/class12`(depth/calibration/click pick), `ros2/class13`(STT 및 bar sorting)에 정리했습니다.
