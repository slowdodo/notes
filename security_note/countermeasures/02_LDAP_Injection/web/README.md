# LDAP Injection 대응책 

## 점검 목적
* 취약한 시스템에 신뢰할 수 없는 LDAP 코드 삽입 공격을 통한
<br/> 비인가자의 악의적인 행위를 차단하기 위함

## 보안 위협
* 응용 프로그램이 사용자 입력 값에 대한 적절한 필터링 및 유효성 검증을
<br>하지 않아 공격자는 로컬 프록시를 사용함으로 LDAP 문의 변조가 가능함
* 공격 성공 시 승인되지 않은 쿼리에 권한을 부여하고, LDAP 트리 내의 내용
<br>수정이나 임의의 명령 실행을 가능하게 하므로 적절한 필터링 로직을 구현하여야 함

## 대상
* 웹 애플리케이션 소스코드, 웹 방화벽

## 판단기준

### 양호
* 임의의 LDAP 쿼리 입력에 대한 검증이 이루어져 변조된 쿼리가
실행되지 않는 경우

### 취약
* 임의의 LDAP 쿼리 입력에 대한 검증이 이루어지지 않아 변조된 쿼리가
실행되는 경우

## 조치방법
* 지정된 문자열만 입력 허용하고, 임의의 LDAP 쿼리 입력에 대한 검증 로직 구현

# 점검방법
![LDAP](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FdJIWn3%2FbtrNXkxKoKJ%2Fmw8nRQhqLoHeRoUa8hzPkK%2Fimg.png)
* 사용자 입력 값에 변조된 LDAP 쿼리 삽입 후 실행되는지 확인

## 보안설정방법
* 사용자 입력 값을 화이트 리스트로 지정하여 영문(a-z, A-Z)과 숫자(0-9)만을 허용
* DN과 필터에 사용되는 사용자 입력 값에는 특수문자가 포함되지 않도록 특수문자 제거
* 특수문자를 사용해야 하는 경우 특수문자(DN에 사용되는 특수문자는 '\', 필터에 사용되는
<br>특수문자는 =, +, <, >, #, ;, \ 등)에 대해서는 실행 명령이 아닌 일반문자로 인식되도록 처리
* 웹 방화벽에 LDAP 관련 특수문자를 필터링하도록 룰셋 적용

## 필터 문자열
 | `			| "						| --			| #				| (				| )			|
|------------	|--------------------	|------------	|-------------	|------------	|-------	|
| =				| */					| /*			| +				| <				| >			|
| user_table	| user_table_columms	| table_name	| column_name	| Syscolumns	|			|
| union			| select				| insert		| drop			| update		| and		|
| or			| If					| join			| substring		| from			| where		|
| declare		| substr				| openrowset	| xp_			| sysobject		| %			|
| *				| ;						| &				| \|			|				|			|
