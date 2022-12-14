# /etc/shadow파일
패스워드 정보를 평문으로 저장할 경우(passwd 방식) 정보 유출 피해가 발생할 수 있으므로 `패스워드를 암호화하여 보호`해야 하는데,
<br/> 이는 shadow 패스워드 방식을 사용하여 /etc/shadow 파일에 암호화된 패스워드가 저장되도록 하고 관리자만이 읽을 수 있도록 제한하여 구현할 수 있다.
<br/>(일반적으로 shadow 파일은 root만이 read할 수 있도록 기본 접근권한이 설정되어 있다.)

shadow 파일에는 계정별로 암호화된 패스워드 정보와 패스워드 에이징(aging) 정보가 저장되어 있다. 패스워드 에이징 정보는 시간의 흐름에 따른 패스워드 관리 정책을 말한다.

구조: [(1)`user_account`]:[(2)`encrypted_password`]:[(3)`last_change`]:[(4)`minlife`]:[(5)`maxlife`]:[(6)`warn`]:[(7)`inactive`]:[(8)`active`]:[(9)`expires`]


# 표
| 번호 	|       필드명       	|                                                                                                                             내용                                                                                                                             	|
|:----:	|:------------------:	|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:	|
|   ①  	|    user_account    	| 사용자 계정명                                                                                                                                                                                                                                                	|
|   ②  	| encrypted_password 	| 암호화된 패스워드                                                                                                                                                                                                                                            	|
|   ③  	|     last_change    	| 마지막으로 패스워드를 변경한 날(1970년 1월 1일 기준으로 지난 일수로 표시)                                                                                                                                                                                    	|
|   ④  	|       minlife      	| 패스워드 최소 사용기간 설정으로 패스워드를 마지막으로 변경한 날(last_change) 이후부터 패스워드를 변경할 수 없는 일수를 의미한다.<br> 패스워드 최소 사용기간을 설정하지 않으면 익숙한 패스워드를 재사용할 문제점이 있으므로 1일(혹은 1주)로 설정할 것을 권장한다. 	|
|   ⑤  	|       maxlife      	| 패스워드 최대 사용기간 설정으로 패스워드를 마지막으로 변경한 날(last_change) 이후부터 패스워드 만료 일수를 의미한다.<br> 패스워드 최대 사용기간을 설정하지 않으면 패스워드 유출 발생 시 공격자의 계속적인 접근이 가능하므로 90일(12주)로 설정할 것을 권장한다.   	|
|   ⑥  	|        warn        	| 패스워드 만료 이전 경고 일수                                                                                                                                                                                                                                 	|
|   ⑦  	|      inactive      	| 패스워드가 만료된 이후 계정이 잠기기 전까지의 비활성 일수로 해당 비활성 기간 동안 패스워드를 변경하지 않으면 계정이 잠기게 된다.<br> Unix 계열에서는 마지막 로그인 이후 해당 비활성 일수 동안 로그인을 하지 않으면 계정을 잠근다는 의미로 Linux와 차이가 있다.   	|
|   ⑧  	|       expires      	| 계정 만료일 설정으로 1970년 1월 1일을 기준으로 일수로 표시한다.                                                                                                                                                                                              	|

# (2) Encrypted_password

1. MD5
2. Blowfish
5. SHA-256
6. SHA-512