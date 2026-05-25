# Class 11

## Doosan MoveItPy / Pick and Place

Doosan M0609 협동로봇을 MoveItPy로 제어하고 OnRobot RG2 gripper를 결합해 기본 manipulation sequence를 구성한 수업입니다. 앞선 MoveIt/trajectory 학습을 실제 로봇 팔 task 형태로 확장했습니다.

## Workspace

```text
class11/dsr_ws/src/dsr_practice/
|-- config/moveit_py.yaml
|-- launch/
`-- dsr_practice/
    |-- mp_basic.py
    |-- mp_waypoint.py
    |-- mp_waypoint_pilz.py
    |-- collision_obstacle.py
    |-- onrobot.py
    `-- pick_and_place.py
```

## Main Practice

- `mp_basic.py`: MoveItPy planning component로 joint/pose goal 실행
- `mp_waypoint.py`, `mp_waypoint_pilz.py`: waypoint motion과 산업용 planner 적용
- `collision_obstacle.py`: planning scene에 장애물을 반영한 경로 생성
- `onrobot.py`, `pick_and_place.py`: RG2 gripper 제어를 포함한 물체 이동 sequence

## Learned

- MoveItPy planning/execution 흐름
- 협동로봇 arm과 end effector의 task 연동
- 충돌을 고려한 manipulation 계획
- pick-and-place를 ROS 2 package와 launch로 구성하는 방법
