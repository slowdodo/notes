# DNS 캐시 포이즈닝
Dns 프로토콜 자체의 취약성으로 캐시 DNS 메모리에 저장된 쿼리 정보를 위.변조하는 기법이다.  
취약한 DNS서버에 조작된 query 전송, DNS 서버 저장 주소 cache 정보 임의 변조 등을 한다.



``` bash
dig www.google.com
```

# 예방방법

1. DNS 상태 확인
2. DNS 최신 버전 유지
3. DNS Recursion 기능 중지
	* Recursion 기능을 신뢰할 수 있는 호스트에 대해서만 Recursive Quert에 대한 응답이 가능한 
4. DNSSEC 프로토콜 사용

