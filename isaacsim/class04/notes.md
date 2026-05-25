# Class 04

## Python Process Automation

Manipulator task를 Python script와 controller로 자동화하는 수업입니다. Franka와 dynamic cube를 이용해 task, observation, controller, physics callback을 연결하는 예제를 다뤘습니다.

## Code Examples

```text
automation_examples/교안 코드/
|-- 슬라이드4/hello_world.py
|-- 슬라이드11-14/manipulator_tutorial.py
|-- 슬라이드18-20/manipulator_tutorial.py
`-- 슬라이드25-27/manipulator_tutorial.py
```

## Main Practice

- robot과 pick 대상 cube를 scene에 배치
- `BaseTask`를 이용해 목표 위치와 observation 구성
- `PickPlaceController`와 physics callback으로 자동 task 실행
- reset과 task 완료 상태를 관리하는 흐름 확인

## Learned

- 디지털 트윈 안에서 반복 가능한 pick-and-place 검증 구성
- ROS 2/MoveIt manipulation 학습과 Isaac Sim task automation의 연결 지점
