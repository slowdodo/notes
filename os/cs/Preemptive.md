# 선점형(Preemptive)
* 프로세스가 점유한 CPU를 다른 프로세스가 빼앗을 수 있음
* 대화형, 시간 분할, 실시간 시스템에 적당
* 문맥 교환이 많아 오버헤드가 큼
* 대표적 방식: RR(Round Robin), SRT(Shortest Remaining Time), MFQ(Multi level Feedback Queue)    