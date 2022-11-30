# PKI(Public Key Infrastructure) 공개키 기반 구조
* PKI는 알고리즘이나 프로토콜, 얘플리케이션이 아닌 인프라스트럭쳐이다.
* `RFC 2822`에 기반한 공개키 기반 구조이다
* 공개키를 메시지로 보고 전자서명 한 공개키를 사용  
* 전자서명 한 공개키 = 인증서 (사회적 합의, 공인인증서)  

송신자의 공개키인지 인증해주는 기능을 하는 시스템이다.  
공개키 알고리즘을 활용하여 디지털 인증서를 `생성, 관리, 저장, 분배, 취소`(life cycle)하는 데 필요한 하드웨어, 소프트웨어, 사람, 정책, 절차를 PKI라 한다.  


## 인증기관(CA, Certification Authority)
인증서에 대한 정책수립, 인정서 효력관리, 다른 CA와의 상호 인증을 수행
    - 최상위 인증기관: KISA(전자서명인증관리센터)
    - 공인인증기관: 한국정보인증, 코스콤, 금융결제원, 한국전자인증, 한국무역정보통신
    - PAA(정책승인기관) -> PCA(정책인증기괸) -> CA(인증기관) 구조

정책 승인기관(PAA, Policy Approving Authority)

정책 인증기관(PCA, Policy Certification Authority)

## 검증 기관(VA, Validation Authority)  
인증서 관련한 거래의 유효성을 검증하는 역할  
    - 인증서 유효성, 인증서 신뢰성 검증

## 등록 기관(RA, Registration Authority)  
사용자와 인증기관 사이에서 사용자의 신분확인 및 서명본에 대한 인증기관 제출을 역할
    - 등록기관 부재시에는 인증기관이 등록기관의 역할을 수행한다.

## 저장소(Repository, Directory)
사용자의 인증서를 보관하는 데이터베이스 역할
    - X.500, LDAP(Lightweight Directory Access Protocol)

## 사용자(Subjects and End entities)
PKI 서비스를 이용하는 사람 또는 시스템, 개체를 표현
    - 자기자신의 비밀키와 공개키의 쌍을 생성
    - 공개키 인증서 요청 및 획득
    - 전자서명 생성 및 검증
    - 비밀키 훼손에 대한 폐지를 요청

# PKC(Public Key Certificate) 인증서
