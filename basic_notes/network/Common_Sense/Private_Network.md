# Private_Network이란?

사설망이란 Public IP를 여러개 쓰는것의 비용적 문제와 물리적 한계를 대체하기위해 만들어진 방법인데  
보통은 가정에선 public ip를 `DNAT`이란 방식으로 IP를 나누게됩니다. 이것으로 모든 사설 ip가 하나의 Public ip를 통하여 밖으로 나가게됩니다.  
하지만 보안적 결함이 있기에 기업에선 SNAT이란 방식을 사용하여 사설망 IP를 나눕니다.  이러한 NAT 방식을 `SNAT`이라 부릅니다.

# NAT에서 가장 큰 차이점 
SNAT은 출발지의 IP를 바꾸고  
DNAT은 목적지의 IP를 바꿉니다.  
![NAT](https://blog.kakaocdn.net/dn/bGsP4S/btqYbImIqvQ/ck5MnnEeRLN2ptHsvUFL91/img.png)

SNAT은 PUBLIC IP로의 접근이 방화벽을 통해서 통제되기에 효과적으로 모니터링이 가능하며 private ip의 주소를 감사하기 쉽습니다.  
DNAT은 Public IP로의 접근이 될려면 1:1 매핑이 필요하기에 한번 이슈가 발생할시에 보안감사가 매우 복잡해지며 만약 랜섬웨어가 서비스에 발생했는데  
한개의 아이피에 여러개의 사설 아이피가 매핑됐다면? 그리고 public ip로의 보안 로그만 나왔다면? 정말 최악의 상황이 됩니다.  
Public ip 한개로만이 감염됐다 나올시에 모든 서비스를 내려서 보안감사를 해야되는 최악의 상황이 발생할수 있고 이렇게 된다면 답이없습니다. 