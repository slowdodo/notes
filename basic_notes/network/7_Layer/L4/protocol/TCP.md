# tcp 플래그 

![tcp_header](https://www.gatevidyalay.com/wp-content/uploads/2018/09/TCP-Header-Format.png)

| TCP Flag 	| 의미                  	| 목적                                                                 	|
|----------	|-----------------------	|----------------------------------------------------------------------	|
| URG      	| 긴급<br>Urgent        	| 중요한 데이터임을 지정한다                                           	|
| ACK      	| 승인<br>Acknowledment 	| 패킷 수신 승인을 의미, 이 비트는 연결이 존재하는 동안 대부분 켜 있다 	|
| PSH      	| 푸시<br>Push          	| 수신자에게 데이터를 버퍼링하지 말고 바로 처리하라 지시               	|
| RST      	| 리셋<br>Reset         	| 연결 초기화                                                          	|
| SYN      	| 동기화<br>Synchronize 	| 연결의 시작 부분에서 순서를 동기화시킴                               	|
| FIN      	| 종료<br>Finish        	| 양쪽에서 연결을 끊고자 하는 신호를 보낼 떄 연결을 끊지 않는다        	|