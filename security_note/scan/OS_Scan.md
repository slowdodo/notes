# 운영체제의 탐지(OS Fingerprinting)

* 공격대상 시스템에 운영체제에 따라 취약점이 달라서 공격수단의 차이가 생김<br/>
따라서 운영체제의 버전, 종류를 파악하기위해 다양한 형태로 스캐닝 작업을 함

## 운영체제 탐지방법

* TCP 연결설정의 시작 순서번호(ISN(Initial Sequence Number)) 설정 방식은 OS 버전마다 차이가 있다. 어떤 OS는 0부터 시작하고, 1부터 시작, 또는 임의 번호로 시작한다.
* IP 패킷의 수명 시간을 나타내는 TTL(Time To Live)의 기본값도 OS마다 차이가 있으며, IP 패킷의 서비스 유형을 표시하는 ToS(Type of Service) 필드를 구현하는 방식도 차이가 있다.<br/>
이 외에도 구현 방법에 차이가 있는 많은 기능이 있다.
* 배너 그래빙(banner grabbing): 배너(banner)는 텔넷처럼 원격지 시스템에 로그인하면 뜨는 안내문과 비슷한것이다.
    * 이 배너를 확인하면은 OS와 커널의 정보를 파악할수가 있다.
        * 막는 방법은 배너를 수정하는 방법
        * 경고문을 붙여서 사후 행위에 대하여 법적 효력을 부가하는 방법이 있다.
# 목록화(Enumeration)
* 목록화는 풋 프린팅과 스캐닝 작업을 통해서 수집한 정보를 바탕으로 좀 더 실용적인 정보를 얻는 과정
* 풋 프린팅과 스캐닝을 통해 수집된 정보만으로는 공격대상 시스템에 집적적인 피해를 입힐 수 없다. 따라서 풋 프린팅과 스캐닝은 공격 대상의 네트워크 구성이나 실행 중인 서비스 정도만 파악할 수 있다. 그렇기에 실제 공격에 사용할 수 있도록 목록화 해야된다.
* 목록화는 공유 자원 목록화, 사용자 및 그룹 목록화, 응용프로그램 목록화로 구분됨

# 대응책

* 배너 그래빙을 막기위해 배너를 수정
* 불필요한 패킷을 차단하도록 방화벽 설정
* 사용하지 않는 포트는 열어놓지 않음
* 침입탐지시스템(IDS)을 사용해 포트 스캔 탐지
* 시스템 로그 감사