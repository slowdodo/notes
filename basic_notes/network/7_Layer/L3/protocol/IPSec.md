# IPSec 모드
![IPSec](../../img/IPSec.png)

# AH(Authentication Header)
* `인증 서비스`, 비연결형, 무결성, 재연(reply) 공격 방지 서비스를 제공
* AH 프로토콜은 발신지 호스트와 메시지에 대한 인증과 IP 패킷의 페이로드의 무결성을 제공하기 위해 사용된다.
* AH 프로토콜의 경우 `기밀성을 보장하지 못한다`.

# ESP(Encapsulation Security Payload)
* 비연결형 기밀성(암호화), 무결성, 인증 서비스를 제공한다.
* ESP 프로토콜은 IP 데이터그램에서 제공하는 선택적 인증과 무결성, 기밀성 그리고 `재전송 공격 방지` 기능을 한다.  터널 종단 간에 협상된 키와 암호화 알고리즘으로 데이터그램을 암호화한다.
* ESP 프로토콜의 경우 암호화 알고리즘으로 DES, 3DES, AES등을 사용할 수 있다.
* ESP 프로토콜은 인증을 사용하지 않을수도 있다.
* ESP는 전송 및 터널 모드를 지원한다.

| Protocol                             	| Confidentiality 	| Integrity 	| Authentication 	| Anti-replay 	| Header Size 	|
|--------------------------------------	|-----------------	|-----------	|----------------	|-------------	|-------------	|
| Authentication Header (AH)           	| No              	| Yes       	| Yes            	| Yes         	| Variable    	|
| Encapsulating Security Payload (ESP) 	| Yes             	| Yes       	| Yes            	| Yes         	| Variable    	|

# 트랜스포트 모드
![transport](../../img/transport.png)
## 특징
* 호스트와 호스트간 통신을 보호하기 위해 사용한다.
* IP 상위의 프로토콜 정보(주로 트랜스포트 프로토콜의 정보)를 인터넷을 통해 안전하게 전달한다.
* IP 헤더 다음에 IPsec 헤더 정보로 추가한다.
* 관련 호스트들이 IPsec을 구현해야된다.

## 장점
* end point간 암호화를 사용하기에 별도의 장비를 필요로하지 않는다.
* 터널링 모드에 비해 오버헤드의 감소로 장비의 효율이 증가한다.
## 단점
* ip 헤더의 원본은 보호하지 못하는 구조적 결함을 가진다.

# 터널
![tunnel](../../img/tunnel.png)

## 장점
* ip헤더까지 보호하므로 전송모드에 비해 보안적으로 안전하다.
* vpn을 사용할시에 유선망을 사용하는것보다 상대적으로 많이 저렴하면서 안전한 인프라를 구축할수있다. 

## 단점
* 별도의 라우터 장비를 필요로 한다.
* 라우터의 부담이 상대적으로 크다(오버헤드가 큼)

| Mode             	| Tunnel                                                                             	|Transport                                                                   	|
|------------------	|------------------------------------------------------------------------------------	|-----------------------------------------------------------------------------	|
| Description      	| Encrypts and authenticates the entire original IP packet and adds a new IP header. 	| Encrypts and authenticates only the data payload of the original IP packet. 	|
| Packet structure 	| Outer IP header (added by IPsec)                                                   	| Original IP header                                                          	|
| Use case         	| Secure connection between two networks                                             	| End-to-end communication between two devices                                	|
| Security         	| More secure                                                                        	| Less secure                                                                 	|
| Overhead         	| Higher                                                                             	| Lower                                                                       	|
| Efficiency       	| Lower                                                                              	| Higher                                                                      	|

# IKE(Inter Key Exchange)
* IPSec의 구성요소의 하나로 SA를 성립, 유지, 보수 하는데 필요한 데이터들을 안전하게 전달하기위해 사용한다.
* IPSec에서 두 컴퓨터 간의 `보안 연결 설정을 위해 사용되는 것`이다.
* 따라서 IKE 프로토콜은 SA를 협의하기위해 사용한다.
* IKE 프로토콜로 세션키를 교환한다.


# SA(Security Association)
* IPSec은 공개키 암호화 방식을 사용한다.(하이브리드 방식)
* 데이터 송수신간에 비밀데이터(인증되었거나, 암호화된 데이터)를 교환할 떄 사전에 암호 알고리즘, 키 교환방법, 키 교환 주기 등에 대한 합의가 이루워져야 한다.
* 데이터 교환 전에 통일되어야 할 이러한 요소들은 IPsec에서 SA로 정의함
* 하나의 SA는 단방향 데이터 전송에 적용되며 데이터 보호를 위해 보안 파라메터를 포함한다.

보안상 안전한 채널을 만들기 위한 SA는 양방향으로 통신하는 호스트 쌍에 여러개가 존재할수 있다. 