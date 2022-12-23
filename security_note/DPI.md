심층 패킷 분석(DPI, Deep Packet Inspection)은 인터넷을 통해 전송되는 데이터의 심층적인 부분까지 분석하는 기술이다.  
이는 인터넷을 통한 외부 네트워크와 내부 네트워크 간 보안장치로, 방화벽 기술을 구성하는 장치 중 하나이다.  
심층 패킷 분석은 인터넷을 통해 전송되는 데이터, 즉 패킷의 실제 내용까지를 검사하고 분석하는 기술로,  
우편물에 비유하자면 우편물을 배달하는 배달원이 우편의 주소나 봉투와 같은 형식적인 측면만이 아니라 우편물 속의 내용물까지 확인하는 것이다.

패킷의 구조를 단순화하면 헤더(header, 머리말)와 페이로드(payload, 본문)로 구성되며 패킷의 표준 모델인 OSI(Open System Interconnections)에 따라서는 7계층으로 구분된다.  
이 때, OSI의 상위 3계층(세션 계층(session layers), 표현 계층(presentation layers), 응용 계층(application layers))에 해당하는 페이로드는 
전송되는 실제 콘텐츠나 데이터를 담고 있으며, 따라서 심층 패킷 분석은 패킷의 페이로드 부분을 분석하는 것이다.

데이터 패킷의 패턴 검사, 행태 분석, 통계 분석 등의 심층 패킷 분석을 통해 네트워크 보안(network security), 대역관리(bandwidth management), 소비자 분석(customer profiling), 수사용 감청(governmental surveillance), 콘텐츠 규제(content regulation), 저작권 제재(copyright enforcement) 등의 영역에서 활용되고 있다.   
심층 패킷 분석은 인터넷의 기본 프로토콜인 TCP(Transmission Control Protocol)의 한계점을 보완하고 인터넷을 통해 전파되는 웜바이러스, 해킹, DDoS 등의 공격 여부를 확인할 수 있게 해 준다는 점에서 필요성이 강조된다.  
그러나 ISP(Internet Service Provider, 개인이나 기업에게 인터넷 접속 서비스, 웹 사이트 구축 등을 제공하는 회사)가 사용자들이 전송하는 데이터의 성격과 내용 등을 파악할 수 있다는 점에서 인터넷 상에서의 표현의 자유와 개인의 프라이버시 침해 가능성에 대한 논란도 제기되고 있다.


출처: https://terms.naver.com/entry.naver?docId=3342866&cid=40942&categoryId=32828