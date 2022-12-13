# 프록시(Proxy)
![Proxy Struct](https://upload.wikimedia.org/wikipedia/commons/thumb/2/27/Open_proxy_h2g2bob.svg/1200px-Open_proxy_h2g2bob.svg.png)

프록시란 단순하게 네트워크를 거치는 경유지라 생각하면 되는데 보통 WAF(WebApp Firewall), 국가의 규제를 우회(예:한국에서 국가가 특정 웹사이트 국가가) 와 같은것을 사용한다.  
프록시의 사용시 주의해야될점은 프록시는 VPN이 아니라 VPN처럼 높은수준의 암호화를 제공하지 않으면 개인사용자 측면에서 프록시는 보안 측면에서 안전하지 못한다. 

# 보안측면
보안측면에서는 프록시는 L7의 필터가 가능하기에 URL 필터, IP주소 입력 방지, HTTP 헤더의 감지 등 IPS의 한계를 극복할수있게 도와준다.  
와닫게 말하자면 바이러스가 있는 사이트나 부적절한 사이트를 프록시를 통하여 필터링 가능하다.