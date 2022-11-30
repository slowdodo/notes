. NMS (Network Management System/Station, 망 관리 시스템)

  ㅇ 통상, 기업 단위 네크워크 상의 전 장비들에 대해,
     - 중앙 감시 등을 목적으로,
     - Monitoring, Planning 및 분석이 가능하고, 관련 데이타를 보관하며, 필요 즉시 활용하는,
     - 망 감시 및 망 성능 관리용 시스템을 말함


2. NMS 장비 구분

  ㅇ Manager (NMS, Network Management Station)
     - 관리하는 시스템 (호스트 등)
        . 관리 시스템 안에 탑재
        . 관리용 메세지를 에이전트에 쿼리 요청 및 모니터링

  ㅇ Agent (Managed Device)
     - 관리되는 장비들 (허브, 라우터, 스위치, 브리지, 호스트 등)
        . 관리되는 장치 안에 탑재되는 S/W 형태의 모듈

     


3. NMS 주요기능  

  ㅇ 장애관리, 구성관리, 계정관리, 성능관리, 보안관리
     - [참고] ☞  FCAPS (Fault Configuration Account Performance Security), 통신망관리  참조

  ㅇ NMS 하부의 각 서브네트워크를 담당하는 다수의 EMS(Element Management System)를 관리


4. NMS 구현 장비의 조건

  ㅇ 네트워크상의 전 장비들에 대한 중앙감시, Monitoring, Planning 및 분석, 
     관련 데이터 보존 및 필요시 즉시 활용 가능
  ㅇ Ethernet 및 FDDI 등 네트워크에 다양하게 접속되어 있는 자원 관리
  ㅇ MIB-1, MIB-2 및 각 제작사 장비 특유의 MIB 지원 등도 가능
  ㅇ GUI 지향


5. NMS 관련 프로토콜

  ㅇ 망관리 프로토콜
     - 중소규모의 TCP/IP 기반의 기본 관리 프로토콜로는, SNMP 프로토콜을 사용
     - OSI에서 제시한 대규모 망에 대한 프로토콜로는, CMIP 프로토콜을 사용
     * 상업적으로는 SNMP가 가장 크게 성공

  ㅇ 경향 : 분산처리 환경을 지원토록 변화되고 있음


6. 네트워크 관리 도구 例

  ㅇ 이종의 네트워크 장비 관리  :  SNMP 및 CMIP 모두 지원
     - HP社의 Openview, IBM社의 Netview, Aprisa社의 spectrum, Sun社의 Solstice 등

  ㅇ 특정 업체들의 망장비 관리 
     - Cisco사의 Ciscoworks, 3Com사의 Transcend,Viewbuilder 등

  ㅇ 리눅스/유닉스에서, 로그 생성/관리 도구 : syslog, rsyslog