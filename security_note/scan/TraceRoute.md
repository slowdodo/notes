# 경로추적(traceroute)

* 종단(End) 노드 사이에 있는 여러 중계 노드 각 구간에 대한 네트워크 상태를 관리하기 위한 명령어로 네트워크의 라우팅 문제점을 찾아내는 목적으로 많이 사용

1. traceroute는 패킷의 TTL(Time to Live)을 하나씩 증가시켜 보낸다.

2. Unreachable Port라는 ICMP 메시지를 받으면 trace가 목적지에 도달했음을 알 수 있다.

3. traceroute는 우연히 도달하는 것을 방지하기 위해 정확히 3개의 UDP 패킷을 보낸다.

4. traceroute 결과에서 응답시간이 *로 표시되는 경우 침입차단시스템 등의 접근통제 리스트에 의해 traceroute의 UDP 패킷이 보안상이 이유로 차단되었거나 실제 해당 구간에 문제가 발생한 경우이다.

