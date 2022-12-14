# CVE(Common Vulnerabilities and Exposures) 의미
 
    CVE 공개적으로 알려진 보안 취약성에 대한 고유한 식별 표기 형식을 제공하는 것이다. 
    고유 식별코드이기 때문에 취약성에 대한 정보들을 통합시킬 수 있다. 
    또한 관리자, 사용자, 분석가 등 취약성에 대한 정보를 정확하게 파악할 수 있도록 도와주는 역할이 핵심이다.

# 특징
1. CVE는 미국 국토안보부 산하의 사이버 보안 및 인프라 보안국에서 지원을 받고 MITRE에서 감독한다.

2. CVE식별자는 CVE Numbering Agency(CNA)에서 발행하고 물론 MITRE에서도 발행 가능하다.

3. CVE는 어디서든 누구든 보고 가능하며 보안 결함을 공개를 장려하기위해 버그바운티 제도를 하고있다. 

4. CVE ID는 보통 대응법을 개발하고 테스트한뒤에 발행하는 경우가 많은데
이는 공격자에게 결함을 악용할 기회를 줄이기 위해서이다.

5. 보안 취약점, 노출에 대한 설명, 취약점 보고서 및 권고 사항 참조정보가 포함된다.

#  표기방식

    CVE-YYYY-N...N

    YYYY: 취약점 발생연도
    NNNN: 취약성보고 순
   
    EX) CVE-2022-1234 -> 2022년에 1234번째 발생한 취약점 보고서

# 조건

1. 독립적으로 수정 가능.
다른 버그로부터 독립적으로 수정할 수 있는 결함입니다.

2. 피해를 입은 벤더 또는 문서를 통한 확인.
소프트웨어 또는 하드웨어 벤더가 버그를 확인하고 보안에 부정적인 영향을 받은 경우입니다. 또는 보고자가 버그의 부정적인 영향과 영향을 받은 시스템의 보안 정책을 위반한 버그에 대한 취약점 보고서를 공유한 경우입니다.

3. 하나의 코드베이스에 영향을 미침.
두 개 이상의 제품에 영향을 미치는 결함에는 별도의 CVE가 할당됩니다. 공유 라이브러리, 프로토콜 또는 표준의 경우, 취약점이 노출되지 않고는 공유 코드를 사용할 방법이 없는 경우 해당 결함에 하나의 CVE만 할당됩니다. 그렇지 않은 경우에는 영향을 받는 각각의 코드베이스 또는 제품에 고유한 CVE가 할당됩니다.




















출처 및 더 자세한 내용: https://www.redhat.com/ko/topics/security/what-is-cve