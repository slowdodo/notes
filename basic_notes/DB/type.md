# DDL (Data Definition Language)

데이터 정의어란? 데이터베이스를 정의하는 언어이며, 데이터를 생성, 수정, 삭제하는 등의 데이터의 전체의 골격을 결정하는 역할을 하는 언어이다.

* CREATE : 데이터베이스, 테이블등을 생성
* ALTER : 테이블을 수정
* DROP : 데이터베이스, 테이블을 삭제
* TRUNCATE : 테이블을 초기화

# DML (Data Manipulation Language) 

데이터 조작어란? 정의된 데이터베이스에 입력된 레코드를 조회하거나 수정하거나 삭제하는 등의 역할을 하는 언어.

* SELECT : 데이터 조회
* INSERT : 데이터 삽입
* UPDATE : 데이터 업데이트
* DELET : 데이터 삭제
* COMMIT : 데이터 작업처리 완료

# DCL (Data Control Language) 

데이터베이스에 접근하거나 객체에 권한을 주는등의 역할을 하는 언어

* GRANT : 특정 데이터베이스 사용자에게 특정 작업에 대한 수행 권한을 부여
* REVOKE : 특정 데이터베이스 사용자에게 특정 작업에 대한 수행 권한을 박탈, 회수
* COMMIT : 트랜잭션의 작업을 저장
* ROLLBACK : 트랜잭션의 작업을 취소, 원래대로 복구