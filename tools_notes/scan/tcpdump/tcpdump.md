# tcpdump란

* tcpdump는 네트워크 인터페이스를 거치는 패킷의 내용을 출력해 주는 프로그램
* tcpdump로 수집한 자료는 증거로써 법적 효력을 지니고 있다.
* 스니핑 도구의 일종으로 자신의 컴퓨터로 들어오는 모든 패킷의 내용을 도청 가능하다.
* 공격자의 추격 및 공격 유형 분석을 위한 패킷 분석 시에 활용할 수 있는 도구

# 대표적 커멘드

* tcpdump [option]
    * -A : 패킷의 내용을 화면에 ASCII로 출력
    * -c : 주어진 수의 패킷을 받은 후 종료
    * -C : 방금 받은 패킷을 저장파일로 만들기 전에 파일의 file_size보다 큰지 체크<br/>
    만약 그렇다면, 현재 저장파일을 닫고 새로 하나를 연다
    * -D : 패킷을 잡을 수 있는 시스템 상에 가능한 네트워크 인터페이스를 목록으로 출력
    * -i : 인터페이스를 정함, 정하지않았으면 tcpdump는 시스템 인터페이스 목록에서 가장 낮은 숫자를 고름
    * -nn : 출력시 호스트/서비스명이 아닌 ip주소와 port번호 출력
    * -v : 패킷 헤더부까지 자세히
    * -vv : 더 자세히
    * -vw : 더 더자세히

# 예제

# 여담 
윈도우는 windump라고 tcpdump 대용으로 있다.
다만 따로 추가 툴을 설치해야하기에 기본으로 내장된것은 아니다.