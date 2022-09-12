# OSI 7 Layer
----
![osi7](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FuxFXq%2FbtroQcqq7FI%2FizudVlicbfS8aCHFswuUxk%2Fimg.png)
| 계층 | 특징 | 통신 데이터 단위 | 프로토콜 | 장비  |
| --- | --- | --- | --- | --- |
| Application Layer   응용 계층   (L7) | \-응용 소프트웨어를 도와주는 계층      \-파일 전송, DB, 메일 전송 등 을 네트워크에 연결해주는 역할       | Message | HTTP   FTP   DNS   SMTP   등 | X |
| Presentation Layer   표현 계층   (L6) | \-데이터를 압축/해제, 암호화/복호화,   문자코드 번역, 등을 수행한다.   \-데이터가 .TXT  .GIF .PNG 등을 인지 구분해줌   \-응용 프로세스의 독립성과 암호화를 제공     | Message | JPG   MPEG   AFP   PAP   등 | X |
| Session Layer   세션 계층   (L5) | \-컴퓨터간 연결을 제어한다.      \-전이중, 반이중, 동시 송수신 제공하여 통신한다.      \-로컬 또는 원격 응용프로그램의 연결, 시작, 제어, 종료의 기능을 수행한다.      \-세션의 현재 상태 기억과 복원도 맡는데 인터넷 환경에선 거의 쓰이지않는다. | Message  | NetBIOS   SSH   등 | X |
| Transport Layer   전송 계층   (L4) | \-오류 검출 및 복구, 흐름제어, 중복검사 등을 진행      \-TCP 프로토콜로 포트를 열어 응용프로그램을 전송할수있게함      \-사용자들이 신뢰성있는 데이터를 주고받을수 있는 역할을 한다.      \- 클래스 0 부터 4까지 총 5개의 클래스로 프로토콜을 구분한다.      \-세그먼트 혹은 데이터그램은 전송 계층 프로토콜의 헤더와 페이로드를 포함한다. |    TCP 면 Segment   UDP면 Datagram | TCP   UDP   등 | 게이트 웨이 |
| Network Layer   네트워크 계층   (L3) | \-IP계층과 IP 프로토콜로 인터넷이 가능하게 한다      \-경로와 주소를 정하고 경로에 따라 패킷을 전달한다.      \-하위계층과 상위계층을 잇는 역할을 해준다. | Paket | IP   ARP   RARP   ICMP   IGMP   IPSec   RIP   등 | 라우터 |
| DataLink Layer   데이터 링크 계층   (L2) | \- Mac Address로 통신한다.   \-  물리 계층을 통해 전달되는 통신 오류를 검출하고 재전송한다.   \- 흐름을 제어한다.   \- 데이터링크 연결을 활성, 비활성, 유지 절차를 담당 | Frame | PPP   FDDI   SLIP   Ethernet   등 | 브릿지/   스위치 |
| Physical Layer   물리 계층   (L1) | \- 통신 케이블로 데이터를 전송한다.   \- 0 과 1 즉 비트로 나타내어진다.   \- 에러 검출을 하지않고 데이터만을 전달한다.   \- 통신을 활성화, 유지, 비활성화를 담당 | Bit | Wireless   Fiber   Coax   등 | 허브   리피터   통신 케이블 |