# cut이란?

문자를 자르는 기능을 가진 도구인데 로그를 집중적으로 분석할때 유용하지만 보통 고도화된 필터링과 특수 기능들을 사용할때는 awk를 사용하는걸 추천하지만  
cut이 간단한 필터나 체계적인 로그를 간단하기 필터링할때 유용하기에 목적에 맞게 적절하게 사용하면 된다.  


# option

-b : 바이트 단위
-c : 문자 단위
-d : 필드 구분자 탭을 사용하지 않고 필드 구분자를 지정
-f : 지정한 필드를 출력


# range

* N : N 번쨰
* N- : N 번째부터 마즈막까지
* N-M : N 번쨰부터 M번쨰까지
* -M : 첫 번쨰부터 M번쨰까지

# case에 따라 문자 자르기

``` bash
date | cut -d " "  -f1-5
```

``` bash
date | cut -d " " -f1-5
```

``` bash
date | cut -d: -f2
```

```bash
cat /var/log/dpkg.log | cut -d " " -f1,3,4
```

``` bash
cat /etc/passwd | cut -d" -f1,7
```
