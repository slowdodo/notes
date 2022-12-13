# DNS(Domain Name System)

DNS
정변환: DNS를 통해 IP를 알아냄
역변환: IP를 통해 DNS를 알아냄

# DNS 동작 방식
![DNS](https://www.lesstif.com/linux-core/files/125304855/129008929/1/1642003660000/image2022-1-13_1-7-38.png)

1. 사용자가 docs.google.com IP 를 재귀적 DNS 에 요청
2. 재귀적 DNS 는 Root DNS 에 .com 에 대한 TLD DNS 정보 요청
3. Root DNS 는 TLD DNS 정보 전송
4. 재귀적 DNS 는 TLD DNS 에 google.com 에 대한 권한있는 네임 서버 정보 요청
5. TLD DNS 는 google.com 를 관리하는 권한있는 네임 서버 정보 전송
6. 재귀적 DNS 는 권한있는 DNS에 docs.google.com 서버의 IP 정보 요청
7. 권한있는 DNS 는 재귀적 DNS 에 IP 정보 전달
8. 재귀적 DNS 는 사용자에게 docs.google.com 의 IP 정보 전달
9. 사용자는 docs.google.com 에 연결 요청
10. docs.google.com 에 연결됨
