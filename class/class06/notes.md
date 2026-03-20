# Class 06

## 1. URDF / Xacro

URDF는 **로봇의 링크, 조인트, 형상, 충돌 모델을 정의하는 포맷**이다.  
ROS2에서는 URDF를 이용해 로봇 모델을 시각화하고, joint / TF 정보를 연결해 동작을 표현할 수 있다.  
또한 Xacro는 **반복되는 URDF 구조를 변수와 매크로로 정리하기 위한 매크로 언어**이며, 최종적으로는 URDF로 변환되어 사용된다.

---

## 2. URDF Tutorial 실습

먼저 `urdf_tutorial` 패키지를 설치하고 제공된 예제를 실행해 URDF의 기본 구조를 확인했다.

- `01-myfirst.urdf` : 단일 링크로 이루어진 가장 단순한 모델 확인
- `02-multipleshapes.urdf` : 여러 link와 joint가 연결된 구조 확인
- `03-origins.urdf` : `origin`, `xyz`, `rpy` 설정에 따라 링크와 조인트 위치가 달라지는 방식 확인
- `04-materials.urdf` : material과 color 설정 확인
- `05-visual.urdf`, `06-flexible.urdf` : 더 복잡한 로봇 구조와 joint state publisher 동작 확인

---

## 3. my_urdf 패키지 실습

직접 `my_urdf` 패키지를 생성하고 간단한 URDF 파일과 launch 파일을 작성했다.

### 주요 작업

- `ament_cmake` 기반 `my_urdf` 패키지 생성
- `urdf`, `launch` 폴더를 install 단계에서 `share/${PROJECT_NAME}` 경로로 복사하도록 `CMakeLists.txt` 수정
- `myfirst.urdf` 작성
- `simple_display.launch.py` 작성

### 코드 구성

- `myfirst.urdf` : 원통 형태의 `base_link`를 가진 간단한 로봇 모델 정의
- `simple_display.launch.py`
  - `robot_state_publisher` 실행
  - `joint_state_publisher` 또는 `joint_state_publisher_gui` 실행
  - `rviz2` 실행
  - `robot_description` 파라미터에 URDF 내용 전달

---

## 4. URDF 동작 실습

다음으로 `urdf_r2d2` 패키지를 생성하고, R2D2 형태의 URDF 모델과 상태 발행 노드를 구성했다.

### 주요 작업

- `ament_python` 기반 `urdf_r2d2` 패키지 생성
- `r2d2.urdf.xml` 및 `r2d2.rviz` 추가
- `state_publisher.py` 작성
- `demo_launch.py` 작성
- `setup.py`에서 launch / urdf 파일과 entry point 등록

### 코드 구성

- `r2d2.urdf.xml`
  - `axis`, `leg1`, `leg2`, `body`, `head`, `rod`, `box` 링크 정의
  - `fixed`, `revolute`, `continuous`, `prismatic` 조인트를 사용해 링크 연결
- `state_publisher.py`
  - `JointState` 발행
  - TF 변환 정보 발행
  - joint 값과 위치를 주기적으로 변경하여 모델이 움직이도록 구성
- `demo_launch.py`
  - `robot_state_publisher` 실행
  - `state_publisher` 실행

---

## 5. Xacro 적용 실습

마지막으로 R2D2 모델을 Xacro로 변환하여 반복되는 URDF 구조를 정리했다.

### Xacro 적용 이유

URDF만 사용할 경우 동일한 link / joint / inertial / collision 구조가 반복되어  
코드 길이가 길어지고 수정이 번거로워진다.  
Xacro는 이를 **property와 macro**로 정리해 재사용할 수 있게 해준다.

### 주요 작업

- `r2d2.urdf.xacro` 작성
- `demo_launch.py` 수정
- `Command(["xacro ", model])`을 이용해 launch 시점에 Xacro를 URDF로 변환
- 클린 빌드 후 다시 실행

### Xacro 구성

- `xacro:property` : 질량, 관성, 길이, 반지름, 색상 등 공통 값 정의
- `xacro:macro`
  - `contact_coefficients` : collision 계수 재사용
  - `unit_inertial` : inertial 블록 재사용
  - `leg` : 다리 link + joint 구조 재사용
- launch 파일에서 `robot_description`에 변환된 URDF 결과를 전달