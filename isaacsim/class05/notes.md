# Class 05

## Camera / LiDAR / Contact Sensors

Isaac Sim에서 가상 센서를 만들고 데이터를 읽는 Python 예제를 실습했습니다. perception과 robot 상태 관측에 사용할 수 있는 sensor simulation 범위를 넓혔습니다.

## Code Examples

| File | Practice |
| --- | --- |
| `sensor_examples/camera.py` | camera frame, world/image 좌표 변환, motion vector 확인 |
| `sensor_examples/fisheye.py` | fisheye camera 모델 |
| `sensor_examples/pinhole.py` | pinhole camera 모델 |
| `sensor_examples/rotating_lidar_rtx.py` | RTX LiDAR point cloud와 이동 로봇 결합 |
| `sensor_examples/contact_sensor.py` | PhysX contact report와 contact sensor reading |

## Learned

- synthetic camera image와 좌표 투영 데이터 생성
- LiDAR 데이터를 이동 로봇 시나리오와 연결하는 방식
- 접촉 force/state를 manipulation 검증 데이터로 읽는 방법
- ROS 2 depth/camera 실습을 가상 센서 환경으로 확장하는 흐름
