# Class 07

## 1. Gazebo / ros2_control

Gazebo는 **로봇을 가상 공간에서 실행하고 테스트할 수 있는 시뮬레이터**이다.  
URDF로 로봇 구조를 만들 수는 있지만, Gazebo에서 실제처럼 관절을 구동하려면 `ros2_control` 설정이 추가로 필요하다.

- `Gazebo` : 가상 환경에서 로봇 동작 확인
- `URDF` : 로봇의 링크, 조인트, 형상, 물리 정보 정의
- `ros2_control` : 관절에 명령을 적용하고 상태를 읽는 제어 프레임워크

---

## 2. simple_arm_description 패키지 실습

`gazebo_ws` 워크스페이스를 만들고 `simple_arm_description` 패키지를 생성했다.

### 주요 작업

- `gazebo_ros` 관련 패키지 설치
- `simple_arm_description` 패키지 생성
- `simple_arm.urdf` 작성
- `display_launch.py` 작성
- `setup.py`에서 `launch`, `urdf`, `rviz` 폴더 설치 경로 추가

### simple_arm.urdf 구성

`simple_arm.urdf`에서는 3축 로봇 팔 구조를 정의했다.

- `base_link` : 로봇의 기준 링크
- `link1`, `link2`, `link3` : 로봇 팔 링크
- `link1_yaw` : 조인트를 분리하기 위한 더미 링크
- `joint1_2` : 베이스의 z축 회전
- `joint1` : 첫 번째 팔의 y축 회전
- `joint2`, `joint3` : 두 번째, 세 번째 팔 관절

각 링크에는 `visual`, `collision`, `inertial`을 추가해 RViz 표시와 Gazebo 물리 계산이 가능하도록 구성했다.

### display_launch.py

RViz에서 로봇 팔을 확인하기 위해 launch 파일을 작성했다.

- `joint_state_publisher_gui` : 슬라이더로 joint 값 생성
- `robot_state_publisher` : URDF와 joint 값으로 TF 계산
- `rviz2` : 로봇 모델 시각화

이를 통해 RViz에서 simple arm 모델을 확인하고 joint 값을 바꾸며 자세 변화를 확인했다.

---

## 3. Gazebo spawn 실습

다음으로 `gazebo_spawn_launch.py`를 작성해 Gazebo에 simple arm 모델을 불러왔다.

### launch 구성

- Gazebo Classic 실행
- `robot_state_publisher` 실행
- `spawn_entity.py`를 이용해 Gazebo에 `simple_arm` 모델 생성

### 핵심 흐름

- URDF 파일을 읽어 `robot_description` 생성
- `robot_state_publisher`에 전달
- Gazebo에서 `spawn_entity.py`로 모델 스폰

처음에는 Gazebo에 모델이 완전히 보이지 않거나 구조가 깨졌는데,  
이는 Gazebo가 단순 시각화가 아니라 **물리 엔진 기반 시뮬레이션**이기 때문에 `collision`, `inertial` 같은 물리 파라미터가 필요했기 때문이다.

그래서 각 링크에 질량, 관성, 충돌 정보를 추가해 Gazebo에서 정상적으로 로봇 팔이 생성되도록 수정했다.

---

## 4. ros2_control 적용

URDF만으로는 Gazebo에서 관절을 실제로 움직일 수 없기 때문에 `ros2_control`을 적용했다.

### 설치 패키지

- `ros2-control`
- `ros2-controllers`
- `gazebo_ros2_control`
- `effort-controllers`

### simple_arm.urdf.xacro 작성

기존 URDF를 Xacro로 바꾸고, 반복되는 링크/조인트 구조를 정리했다.

주요 추가 내용

- `xacro:property` : 링크 길이, 질량, joint limit, damping 등 공통 값 정의
- `xacro:macro` : `box_link`, `revolute_joint` 매크로로 구조 재사용
- `<gazebo>` plugin : `libgazebo_ros2_control.so` 추가
- `<ros2_control>` 블록 : 제어할 joint와 interface 정의

joint interface는 모두 `effort` 명령을 사용하도록 설정했다.

- `joint1_z`
- `joint1_y`
- `joint2`
- `joint3`

---

## 5. Controller 설정 및 실행

`config/controllers.yaml` 파일을 추가해 사용할 컨트롤러를 설정했다.

### 설정한 컨트롤러

- `joint_state_broadcaster`
- `effort_controller`

### 역할

- `joint_state_broadcaster` : 현재 joint 상태를 `/joint_states` 토픽으로 publish
- `effort_controller` : 각 조인트에 effort(토크) 명령 전달

### gazebo_spawn_launch.py 수정

모델 spawn 이후 컨트롤러가 순서대로 로드되도록 launch 파일을 수정했다.

- Gazebo 실행
- robot_state_publisher 실행
- 모델 spawn
- `joint_state_broadcaster` spawner 실행
- `effort_controller` spawner 실행

`OnProcessExit`를 이용해 spawn 완료 후 컨트롤러가 로드되도록 구성했다.

---

## 6. 실행 결과

실행 후 확인한 내용은 다음과 같다.

- Gazebo에 simple arm 모델이 정상적으로 생성됨
- `/joint_states` 토픽이 publish됨
- `joint_state_broadcaster`가 active 상태로 동작
- `effort_controller`가 active 상태로 동작
- `/effort_controller/commands` 토픽으로 effort 명령을 보낼 수 있음
