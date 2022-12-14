# 커버로스 개념
클라이언트/서버 모델에서 동작하여 대칭키 암호기법에 바탕을 둔 티켓 기반 인증 프로토콜이며 동시에 KDC이다.
End-to-End 보안을 제공한다.
분산 환경을 위한 SSO의 한 예이며 혼합 네트워크를 위한 사실상의 표준이다.

키 분배와 키 합의의 차이점은?  
키 분배: 사용자 또는 기관이 비밀키를 설정하여 다른 사용자에게 전달하는 기술이다. (Needham-Schroeder)  
키 합의: 두 당사자간 준비된 키가 없더라도 안전하지 못한 채널을 통해 키를 공유할 수 있게 패킷을 교환해 가며 대칭키를 합의해가는 과정이다 (Diffie-Hellman)  


# 특징
기업 접근 통제를 위해 확장성, 투명성, 안전성, 보안(무결성, 기밀성)을 갖는다. (가용성은 제공하지 않는다.)  
사용자에게 동일한 계정정보로 여러가지 서비스를 받을 수 있게 한다.  
사용자들은 KDC를 신뢰하며 KDC는 티켓을 생성하여 통신을 할 필요가 있는 주체에게 발행한다.  

# 구성 요소
KDC: 키 분배 서버이다. (Kerberos의 핵심 구성요소)  
AS: 실질적으로 인증을 수행한다.  
TGS: 티켓 부여 서비스이다.  
Ticket: 사용자에 대해 신원과 인증을 확인하는 토큰  
Principals: 인증을 위하여 커버로스 프로토콜을 사용하는 모든 실체  

# 구성도
* 커버로스는 모든 사용자의 PW를 알고있고 중앙 집중식 DB에 패스워드를 저장하고 있는 AS를 이용한다.
* AS는 각 서버와 물리적, 안전한방법으로 유일한 비밀키를 공유한다.
* TGS는 AS에게 인증받은 사용자에게 티켓을 발행한다.
* 사용자가 새 서비스를 요청할 때마다 클라이언트는 티켓을 이용해 TGS에 접속한다. TGS는 요청된 서비스에 대해 티켓을 발행한다.
* 사용자는 서비스 승인 티켓을 보관하고 필요할 때마다 티켓을 사용하여 서버에 인증시킨다.
* 타임스탬프를 두어서 위장하는 것을 보호한다.

# 취약점
단일 실패 지점이 발생한다.  
비밀키는 사용자의 워크스테이션에 저장되며 침임자가 암호화된 키를 흭득할 수 있다.  
패스워드 추측 공격에 취약하다. (사전 공격이 발생하고 있어도 알지 못함)  

# Kerboros V4 vs Kerboros V5
## 버전 4

1. DES를 사용한다.
2. 인터넷 프로토콜 주소를 사용한다.
3. 최대 유효기간이 존재한다.

## 버전 5

1. 모든 종류의 암회기술을 사용한다.
2. 어떤 종류의 네트워크 주소도 가능하다.
3. 정확한 시작시간과 만료시간을 명시해서 유효기간이 따로 없다.

# 단점
* 커버로스 서버가 SPOF(Single Point Of Failure) 이기 때문에 이 서버가 다운되면 기존에 이미 로그인된 유저를 제외한 새롭게 로그인을 시도하는 유저가 서버에 접속하는것이 불가능해진다.
* AS, TGS, SS간에 서로 비밀키를 미리 알고있어야 하기때문에 동기화 이슈가 존재한다.
* 인증이 한번 완료되면 유효기간이 존재하긴 하지만 티켓이 클라이언트에 보관되므로 티켓이 탈취될 가능성이 있다.