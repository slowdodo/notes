# Wireshark란?

가장 대중적이고 가장 유명한 네트워크, 프로토콜, 패킷 분석 도구이다.


와이어 샤크는 이럴때 매우 효과적이다.

1. 알려진 문제의 근원지를 조사
2. 기기 간 특정한 프로토콜이나 스트림을 찾는다.
3. 네트워크에서 특이한 타이밍(Timing), 프로토콜 플래그, 비트 분석 등

이럴때는 비효율적이다.

1. 프로토콜의 점유율 확인
2. 네트워크의 트래픽을 분석
3. 두 기기간의 통신을 추적하기

# 화면 표시 필터 비교 연산자

| 영어 | c언어 형태의 구문 | 설명|
| --- | ------------------| ---|
| eq  | ==                | 같다. |
| ne  | !=                | 같지 않다.|
| gt  | >                 | ~보다 크다.|
| lt  | <>                | ~보다 작다.|
| ge  | >=                | ~보다 크거나 같다.|
| le  | <=                | ~보다 작거나 같다.|
| Contains|               | 주어진 값이 필터 항목에 포함돼 있는지 테스트한다.|
| Matches |               | Perl 형태의 정규 표현식(Regular Expression)으로 항목 테스트|


# 자주 사용하는 구문

ip.addr == 192.168.2.1 
출발지나 목적지의 ip가 192.168.2.1일경우 출력

ip.addr == 192.168.2.1 && ip.addr ==192.168.2.2 두 개의 정의된 ip 주소를 모두 출력

http or arp 모든 http와 dns 프로토콜을 출력

tcp.port == 4000 출발지나 목적지의 포트가 4000인 tcp 패킷을 출력

tcp.flags.reset == 1 모든 TCP reset 플래그가 활성화된 패킷을 출력

http.request 모든 http get 요청 패킷을 출력

tcp contains traffic traffic이라는 단어를 포함하는 tcp 패킷을 출력

!(arp or icmp or dns) 괄호 내용을 모두 제외한 패킷을 출력

contains 33:27:58 핵스값(0x33 0x27 0x58) 필터

tcp.analvsis.retransmission 추적에서 모든 전송을 표시