# AS(Autonomous System) 
인터넷상의 개별적인 라우팅 관리 도메인(ISP)

# 인터넷 라우팅
* 전체 인터넷을 여러 개의 AS로 나누고, AS 내부는 각각 독립적인 라우팅 프로토콜로 적용한다.
* AS간 라우팅은 각 AS를 연결하는 라우터들 간에 별도의 프로토콜로 수행한다.
* ISP별로는 표준 라우팅 프로토콜을 사용해야된다.

# Intra-AS 라우팅 프로토콜
* AS 내부에 적용가능한 라우팅 프로토콜(Interior Gateway Protocol)
* RIP, OSPF, ...

# Inter-AS 라우팅 프로토콜
* AS 간에 적용가능한 라우팅 프로토콜(Exterior Gateway Protocol)
* BGP, ...