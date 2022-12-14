# 점검목적
* 대화형 웹 사이트에 비정상적인 사용자 입력 값 허용을 차단하여 악의적인
* 데이터베이스 접근 및 조작을 방지하기 위함

## 보안 위협
* 해당 취약점이 존재하는 경우 비정상적인 SQL 쿼리로 DBMS 및
<br>데이터(Data)를 열람하거나 조작 가능하므로 사용자의 입력 값에 대한 필터링을 구현하여야 함

# 점검대상 및 판단기준

## 대상
* 웹 애플리케이션 소스코드, 웹 방화벽

## 판단기준

### 양호
* 임의로 작성된 SQL 쿼리 입력에 대한 검증이 이루어지는 경우
### 취약 
* 임의로 작성된 SQL 쿼리 입력에 대한 검증이 이루어지지 않는 경우


# 조치방법

* 소스코드에 SQL 쿼리를 입력 값으로 받는 함수나 코드를 사용할 경우, 임의의
<br/> SQL 쿼리 입력에 대한 검증 로직을 구현하여 서버에 검증되지 않는 SQL 쿼리
<br/> 요청 시 에러 페이지가 아닌 정상 페이지가 반환되도록 필터링 처리하고 웹
<br/> 방화벽에 SQL 인젝션 관련 룰셋을 적용하여 SQL 인젝션 공격을 차단함
