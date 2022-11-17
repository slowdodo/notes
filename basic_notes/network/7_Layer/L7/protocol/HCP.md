# Host Configuration Protocol

# RARP(Reverse Address Resolution Protocol)

인터넷 초기에 부팅된 컴퓨터의 IP 주소를 제공하기위해 만들어졌다.  
ARP는 IP 주소를 물리 주소로 매핑하고 RARP는 물리주소를 IP주소로 매핑한다. 

* 오늘날에 RARP가 거의 사용되지 않는 이유 2가지
	* RARP는 데이터링크 계층의 브로드캐스트 서비스로 사용하는데 이는 ARP 서버가 각 망에 존재해야 함을 의미한다.
	* 컴퓨터가 위에서 언급한 모든 정보의 4가지 항목을 요구하는데 반해 RARP는 오로지 IP 주소만을 제공한다.

# BOOTP(Bootstrap)
* BOOTP는 DHCP의 이전 주자이다. 이는 rarp 프로토콜의 두 가지 약점을 극복하기 위해 만들어진 클라이언트/서버 프로토콜이다.
* 먼저 이는 클라이언트/서버 프로그램이므로 BOOTP 서버가 인터넷상의 어디에나 있을수 있다. 다음으로 IP주소를 포함하여 위에서 언급한 모든 정보를 제공한다.
* 4가지 항목을 모두 ㅈ공하기 위해 RARP 프로토콜에 관한 모든 제약을 제거하였다. 그러나 BOOTP는 정적인 설정 프로토콜이다.

# DHCP(Dynamic Host Configuration Protocol)
