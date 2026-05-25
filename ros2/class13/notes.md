# Class 13

## STT / Robot Task Automation

음성 명령과 vision 기반 task를 로봇 제어에 연결한 수업입니다. 기존 pick-and-place 패키지 위에 STT command interface와 자동 분류 task를 추가했습니다.

## Workspace

```text
class13/dsr_ws/src/dsr_practice/
|-- dsr_practice/
|   |-- stt_node.py
|   |-- stt_robot_control.py
|   |-- stt_pick_and_place.py
|   |-- bar_sort_node.py
|   `-- bar_detect_test.py
`-- launch/
    |-- stt_robot_control.launch.py
    |-- stt_pick_and_place.launch.py
    `-- bar_sort_node.launch.py
```

## Main Practice

- `stt_node.py`: 음성 입력을 ROS 2 message 기반 command로 전달
- `stt_robot_control.py`: home 및 방향 이동 명령을 MoveItPy 동작으로 변환
- `stt_pick_and_place.py`: 음성 trigger와 pick-and-place task 연결
- `bar_sort_node.py`: depth/vision 결과로 bar를 분류하고 지정 위치에 배치

## Learned

- 사람의 명령을 robot action으로 연결하는 interface 설계
- perception, planning, gripper control을 포함한 task automation
- 음성 명령과 안전 작업영역 제한을 함께 고려하는 방법
