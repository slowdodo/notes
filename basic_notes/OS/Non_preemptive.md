# 비선점형(Non preemptive)
* 점유된 CPU는 다른 프로세스가 빼앗을 수 없음  
* 일괄처리 방식에 적당  
* 문맥 교환이 적어 오버헤드가 작음  
* 대표적 방식: FIFO=FCFS(First In First Out), SJF(Shortest Job First), HRN(Hifhest Respinse-Rate Next), 우선순위(Proprity), 기한부(Deadline) 방식  