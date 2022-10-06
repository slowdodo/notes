# 계층별 장비 종류
| 계층| 장비종류              |기능 |
| --- | -------------------- | ----|
| 응용| 게이트웨이| 서로 다른 유형의 네트워크들을 연결한다.<br>프로토콜 및 포맷 해석을 수행한다.
| - | L7 스위치| |
|전송| L4 스위치| |
|네트워크| 라우터 | 여러 LAN을 분리하고 연결하여 인터네트워크를 생성한다<br>라우터는 IP 주소에 기반을 두어 필터링에|
|데이터링크| 스위치|통신 장치들 사이에 가상 사설 링크를 제공하여 VLAN을 기능하게 한다.<br>충돌을 감소시키고 네트워크 스티핑을 저지한다.|
| - |브리지|MAC 주소에 기반을 두어 패킷을 전송하고 필터함<br>브로드캐스트 트래픽을 전송하지만, 충돌 트래픽을 전송하지않음|
|물리|리피터|신호를 증폭하여 네트워크를 확장한다.|
| - |허브|집중화 장비라 부르며, 단순히 노드들을 연결시켜주는 역할| 

# 브리지 vs 라우터

| 브리지 | 라우터 |
| --- | --- |
|헤더 정보를 읽지만, 변경시킬 수는 없다.| 각 프레임에 새로운 헤더를 생성|
|MAC 주소에 근거하여 전송 테이블을 작성 | IP 주소에 근거하여 라우팅 테이블을 작성|
|모든 포트에 대해 동일한 네트워크 주소를 사용| 포트마다 서로 다른 네트워크 주소를 사용|
|MAC 주소에 기반하여 트래픽을 필터링| IP주소에 기반하여 트래픽을 필터링|
| 브로드캐스트 패킷을 전달 | 브로드캐스트 패킷을 전달하지 않음|
| 브리지에게 알려지지 않은 목적 주소를 가진 트래픽도 전달| 라우터에게 알려지지 않는 목적지 주소를 가진 트래픽은 전달하지 않음|