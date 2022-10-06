# 플린(Flynn) 분류법
### SSID (Single Instruction Single Data)
* 단일 처리기 컴퓨터
* 한 번에 한 개의 명령어 입력과 하나의 데이터가 처리
* 파이프라인(Pipeline) 기법에 응용이 가능하다.
### SIMD (Single Instruction Multiple Data)
* 한 번에 한 개의 명령어 입력과 다수의 데이터가 처리
* 어레이 처리(Array Processing) 기법에 응용
* 확장 개념: SIMT(T: Thread)
### MISD (Multiple Instruction Single Data)
* 여러 명령에 대하여 하나의 데이터만을 처리
* 구현 불가
### MMID (Multiple Instruction Multiple Data)
* 여러 명령에 대하여 여러 데이터가 처리
* 병렬컴퓨터에서 사용하는 구조
#### 다중 처리기(MIMD)