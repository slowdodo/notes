# MIMD(Multi Instruction Multi Data)
![MIMD](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FbuNeps%2Fbtq2yazVEUo%2FR9dTZeUaUx5enYLikqhhdK%2Fimg.png)

### 다중처리기(Multi-processor)
* 여러 개의 프로세서가 하나의 메모리를 공유하는 기법
* 강 결합(Tightly-coupled)시스템
* 병렬처리 시스템에 적합
* 전송 지연이 짧고 데이터 처리율이 높음
* 프로세스 간 통신의 공유 메모리를 통해 이루워짐
* 공유 메모리 접근을 위한 프로세스 간 경쟁이 발생
* 동일 메모리이므로 운영체제도 동일
* 모든 CPU는 하나의 운영체제에서 통제되는 대칭형 구조

### 다중 분산 컴퓨터(Multi-Distributed-Computer)
* Multi-Computer
* 여러 개의 CPU가 독립적인 메모리를 사용
* 약 결합(Loosely-coupled)시스템
* 분산 처리 시스템에 적합
* 전송 지연이 길고 데이터 처리율이 낮음
* 프로세스 간 통신은 통신망 메시지(소켓)을 사용
* 별도의 컴퓨터 시스템으로 운영되므로 운영체제도 독립


### 병렬처리(Parallel-Processing)
* Parallel Processing
* 다수의 프로세서가 여러 개의 프로그램 또는 한 프로그램의 분할된 부분을 동시에 처리하는 기술
