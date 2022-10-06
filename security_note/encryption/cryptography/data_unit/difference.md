|     구분    	|              스트림 암호             	|              블록 암호              	|
|:-----------:	|:------------------------------------:	|:-----------------------------------:	|
| 암호화 단위 | bit | block |
|  복호화 단위 | bit | block|
| Confusion and Diffusion | steam은 Confusion만을 사용 | block은 Confusion과 Diffusion 둘다 사용|
| 속도 | 암호화 속도가 빠르다 | 스트림보다 느림|
| 암호화 중복범위 | 없다 | 평문의 양에 따라 중복된다|
| 코드양| 적은 코드여도 됨 | 더 많은 코드를 써야 함|
| 알고리즘 모델 | ECB, CBC,| CFB, OFB|
| 키 | 1번 사용하고 암호 폐기 | 중복해서 사용| 
| 구현  | 하드웨어에 구현하기 적합하다. | 소프트웨어에 구현하기 적합하다.|
| 예시 | OTP, LFSR, MUX generator | DES, IDEA, SEED, RC5, AES |


출처 : https://www.educba.com/stream-cipher-vs-block-cipher/