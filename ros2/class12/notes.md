# Class 12

## Depth Camera / Calibration / Click Pick

Depth camera와 OpenCV 기반 좌표 처리를 로봇 manipulation에 연결한 수업입니다. 카메라에서 선택한 위치를 calibration 결과로 변환해 Doosan robot의 pick target으로 사용하는 흐름을 실습했습니다.

## Workspace

```text
class12/
|-- depth_ws/src/depth_pkg/          # color/depth viewer, pixel-to-3D
`-- dsr_ws/src/dsr_practice/
    |-- dsr_practice/click_pick_node.py
    |-- dsr_practice/Calibration_Tutorial/
    |-- dsr_practice/gear_assembly.py
    `-- launch/click_pick_node.launch.py
```

## Main Practice

- `depth_pkg`: image/depth topic을 확인하고 클릭한 pixel의 camera coordinate 계산
- `Calibration_Tutorial`: checkerboard 기반 hand-eye/eye-to-hand calibration 실습
- `click_pick_node.py`: image click, depth, calibration 변환, MoveItPy motion을 하나의 pick 흐름으로 통합
- `gear_assembly.py`: 정해진 작업 위치를 이용한 manipulation 응용

## Learned

- depth stream과 camera intrinsics의 활용
- camera frame과 robot base frame 사이의 calibration 필요성
- perception 결과를 안전 작업 영역 안의 robot target으로 변환하는 방식
- vision-guided manipulation pipeline의 기본 구성
