# Class 02

## Robot Asset Import / PhysX / OmniGraph

로봇 및 공장 설비 asset을 Isaac Sim으로 가져오고, PhysX 물리 속성과 OmniGraph 기반 실행 흐름을 다룬 수업입니다.

## Main Topics

- Doosan robot asset/URDF/USD import 과정 확인
- rigid body, collider, articulation 등 PhysX 구성 요소
- 공정 설비 배치 후 물리 기반 상호작용 설정
- OmniGraph를 사용한 센서 및 동작 pipeline 구성 개념

## Portfolio Note

수업에서는 제공된 Doosan asset 묶음을 import 대상으로 사용했습니다. 이 폴더에는 타사 asset 전체를 복제하지 않고, 제가 학습한 import/physics 구성 흐름을 기록합니다.

## Learned

- ROS 2에서 사용하던 로봇 모델을 digital twin asset으로 확장하는 관점
- scene에서 충돌과 물리 속성이 manipulation 검증에 미치는 영향
