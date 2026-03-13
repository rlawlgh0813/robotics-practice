# Robotics Practice

ROS 2 기반 로보틱스 프로그래밍 수업 실습을 기록한 저장소입니다.

Ubuntu 환경에서 ROS 2를 사용하여 노드 통신, launch 시스템, parameter 제어 등을 실습하며  
로봇 소프트웨어 시스템의 기본 구조와 동작 방식을 학습합니다.

이 레포지토리는 수업에서 진행한 실습 코드와 학습 내용을 정리하기 위해 작성되었습니다.

---

## What I Learn

수업에서는 ROS 2 기반 로봇 시스템의 기본 구성 요소와 통신 구조를 중심으로 실습을 진행합니다.

주요 학습 내용

- ROS 2 기본 구조 (Node, Topic, Message)
- Publisher / Subscriber 통신
- Service / Client 통신
- Action 기반 비동기 작업 처리
- Launch 시스템을 이용한 다중 노드 실행
- ROS 2 Parameter 및 Dynamic Parameter Control
- turtlesim 기반 로봇 동작 실습

---

## Environment

- OS : Ubuntu (Lab environment)
- Framework : ROS 2
- Build Tool : colcon
- Language : Python / C++

---

## Repository Structure

### docs

ROS 2 개발 환경 및 명령어 정리 문서.

환경 설정 과정, ROS 2 CLI 명령어, 실습 중 발생한 문제 해결 기록 등을 정리합니다.

예시

- ROS 2 설치 및 환경 설정
- 자주 사용하는 ROS 2 명령어
- 개발 중 발생한 오류 및 해결 방법

### class

수업에서 진행한 실습 내용을 주차별로 정리한 디렉토리입니다.

각 디렉토리에는 다음 내용이 포함됩니다.

- `notes.md` : 해당 수업에서 학습한 내용 정리
- 실습 코드
- ROS 2 패키지 및 노드 구현

수업은 약 15주 동안 진행되며 ROS 2의 주요 기능을 실습 중심으로 학습합니다.

### src

ROS 2 패키지 및 실습 코드가 포함된 workspace입니다.

실습 과정에서 작성한 노드, 패키지, launch 파일 등을 관리합니다.

---

## Purpose

이 저장소는 ROS 2 기반 로보틱스 실습 과정과 학습 내용을 정리하기 위해 작성되었습니다.

수업에서 구현한 코드와 실험 과정을 기록하여  
ROS 2 기반 로봇 소프트웨어 구조를 이해하는 것을 목표로 합니다.