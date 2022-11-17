# tcp 플래그 

![tcp_header](https://www.gatevidyalay.com/wp-content/uploads/2018/09/TCP-Header-Format.png)

| 구조              | 크기  | 설명                     |
| ----------------- | ----- | ----------------------- |
| Source Port       | 16bit | 운영체제내 송신 프로세스의 주소 <br> 응용프로그램을 식별하기 위해 운영체제에 의해 동적인 번호로 할당된다.|
| Destination Port  | 16bit | 수신 프로세스의 주소 <br> 수신 포트는 서버 구동 시 할당된다.|
| Sequence Number   | 32bit | TCP 세그먼트의 일련번호 <br> 일련번호느느 세그먼트 별 1씩 증가 <br> 세그먼트의 누락을 해결, 순서 교정 및 중복 세그먼트를 방지한다.|
| Acknowledge Number| 32bit | 다음 번에 수신될 것으로 예상되는 세그먼트의 번호 |
| Header Length     | 4bit  | 헤더의 크기(지정 크기 x4, 기본값: 101b) <br> - 기본값: 0101b = 5 -> 20bytes(5*4) <br> 이 값을 통해, 세그먼트내 데이터(SDU)의 시작 위치를 알 수 있다. |
| Reserve           | 6bit  | 미래를 위해 남겨놓은 영역 <br> 현재까지 사용되지 않는다. |
| Flag Bits         | 6bit  | 회선, 데이터의 관리와 제어 기능 등을 수행하는 영역 |
| Window Size       | 16bit | 
| Checksum          | 16bit |
| Urgent Pointer    | 16bit |
| Options           | 32bit |

| TCP Flag 	| 의미                  	| 목적                                                                 	                |
|----------	|-----------------------	|----------------------------------------------------------------------	                |
| URG      	| 긴급<br>Urgent        	| 중요한 데이터임을 지정한다 <br> 순서에 상관없이 먼저 송신된다                            |
| ACK      	| 승인<br>Acknowledment 	| 패킷 수신 승인을 의미, 이 비트는 접속 요청에 사용되는 SYN 메시지 이후 항상 1로 설정됨 	|
| PSH      	| 푸시<br>Push          	|  버퍼의 내용을 채우지 않고 바로 전송을 수행                                             |
| RST      	| 리셋<br>Reset         	| 연견을 해제하기 위해 사용                                                              |
| SYN      	| 동기화<br>Synchronize 	|  연결 설정에 사용함 <br>연결의 시작 부분에서 순서를 동기화시킴                           |
| FIN      	| 종료<br>Finish        	| 전송할 남은 데이터가 없음을 알린다. 즉 연결종료                                         |
