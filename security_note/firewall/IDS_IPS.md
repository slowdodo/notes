![차이점](https://t1.daumcdn.net/cfile/tistory/999FF04E5C51E74405)


* IDS
    * 침입 여부를 탐지
    * Passive and Reactive
    * 보안관리자에게 경보
    * 방화벽 등과 연계를 통한 차단
* IPS
    * 침입 차단 및 차단
    * Active and Proactive
    * 자체적으로 직접 차단함

# IDS와 IPS의 공통점

* 패킷 스니핑: 특정구간으로 전송되는 패킷을 복제하고 분석함
* Rule 탐지: IPS는 임계치 기반의 Rule을 탐지(DDoS)하고 IDS는 임계치 기반 및 특정 악성코드 Signature 등의 탐지를 수행

# 차이점

* 구분
    * IDS
        * TMS
        * 오용탐지, 이상탐지
        * 통합 보안관제
        * 없음
        * 빅데이터 기반의 통합 위협관리 시스템(SIEM)
    * IPS
        * DDoS 대응장비
        * 오용탐지
        * 네트워크 공격대응
        * AWS Shield
        * 네트워크 ATP, ESM과 분석 로그를 연동

* IDS와 IPS의 보안솔루션 평가지표로는 False Positive, Negative 지표를 사용해서 오탐율을 관리한다.