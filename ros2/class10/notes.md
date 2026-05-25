# Class 10

## RealSense Depth Image

Class 10에서는 RealSense camera topic을 구독하고, depth image에서 특정 pixel의 깊이와 camera coordinate를 계산하는 실습을 했다.

로봇팔 제어만으로는 실제 물체와 상호작용하기 어렵기 때문에, perception 단계에서 image/depth stream을 읽고 2D pixel을 3D 위치로 바꾸는 기본 흐름을 확인했다.

## Workspace

```text
class10/depth_ws/src/depth_pkg/
└── depth_pkg/
    ├── image_viewer.py
    ├── depth_viewer.py
    └── depth_click_viewer.py
```

## Main Practice

### `image_viewer.py`

RealSense color image topic을 구독하고 OpenCV window로 화면을 확인한다.

### `depth_viewer.py`

Depth image topic을 구독해 depth frame을 확인한다.

### `depth_click_viewer.py`

Color image에서 클릭한 pixel을 기준으로 depth 값을 읽고 camera coordinate를 계산한다.

- color topic: `/camera/camera/color/image_raw`
- depth topic: `/camera/camera/depth/image_rect_raw`
- camera info topic: `/camera/camera/depth/camera_info`
- intrinsics: `fx`, `fy`, `cx`, `cy`
- output: clicked pixel의 `X`, `Y`, `Z` camera coordinate

계산식은 pinhole camera model을 따른다.

```text
Z = depth
X = (u - cx) * Z / fx
Y = (v - cy) * Z / fy
```

## Learned

- ROS 2 image topic 구독
- `cv_bridge`로 ROS image message를 OpenCV image로 변환
- depth image와 camera intrinsics 사용법
- pixel coordinate를 camera coordinate로 변환하는 기본 원리
- 향후 object detection/VLM 결과를 robot control로 연결하기 위한 perception 기초
