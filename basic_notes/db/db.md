# Key

후보키 (Candidate Key)

    릴레이션을 구성하는 속성들 중에서 튜플을 유일하게 식별할 수 있는 속성들의 부분집합을 의미합니다. 

    * 모든 릴레이션은 반드시 하나 이상의 후보키를 가져야합니다.

    * 릴레이션에 있는 모든 튜플에 대해서 유일성과 최소성을 만족시켜야합니다.

기본키 (Primary Key)    
    
    * 후보키 중에서 선택한 주키(Main Key)

    * 한 릴레이션에서 특정 튜플을 유일하게 구별할 수 있는 속성

    * Null 값을 가질 수 없습니다. (개체 무결성의 첫번째 조건)

    * 기본키로 정의된 속성에는 동일한 값이 중복되어 저장될 수 없습니다.(개체 무결성의 두번째 조건)

대체키 (Alternate Key)
    
    * 후보키가 둘 이상일 때 기본키를 제외한 나머지 후보키들을 말합니다.

    * 보조키라고도 합니다.

슈퍼키 (Super Key)

    * 슈퍼키는 한 릴레이션 내에 있는 속성들의 집합으로 구성된 키로서 릴레이션을 구성하는 모든 튜플 중 슈퍼키로 구성된 속성의 집합과 동일한 값은 나타내지 않습니다. 

    * 릴레이션을 구성하는 모든 튜플에 대해 유일성은 만족하지만, 최소성은 만족시키지 못합니다.

외래키 (Foreign Key)

    * 관계(Relation)를 맺고 있는 릴레이션 R1, R2에서 릴레이션 R1이 참조하고 있는 릴레이션 R2의 기본키와 같은 R1 릴레이션의 속성

    * 외래키는 참조되는 릴레이션의 기본키와 대응되어 릴레이션 간에 참조 관계를 표현하는데 중요한 도구로 사용됩니다.

    * 외래키로 지정되면 참조 테이블의 기본키에 없는 값은 입력할 수 없습니다. (참조 무결성 조건)

유니크 키 (Unique Key)

    테이블 내 항상 유일해야 하는 값, 중복을 허용 안함

    해당 Col에서 입력되는 데이터가 각각 유일하다는 것을 보장하기위한 제약 조건

    NULL값 허용

# DDL (Data Definition Language)

    데이터 정의어란? 데이터베이스를 정의하는 언어이며, 데이터를 생성, 수정, 삭제하는 등의 데이터의 전체의 골격을 결정하는 역할을 하는 언어이다.

    CREATE : 데이터베이스, 테이블등을 생성
    ALTER : 테이블을 수정
    DROP : 데이터베이스, 테이블을 삭제
    TRUNCATE : 테이블을 초기화

# DML (Data Manipulation Language) 

    데이터 조작어란? 정의된 데이터베이스에 입력된 레코드를 조회하거나 수정하거나 삭제하는 등의 역할을 하는 언어.

SELECT : 데이터 조회

    ex)
    SELECT * FROM TABLE;
    SELECT COUNT(*) CNT FROM TABLE;

    SELECT * FROM TargetTable
    WHERE TargetField IS NULL

    SELECT * FROM TargetTable
    WHERE TargetField IS NOT NULL

INSERT : 데이터 삽입

UPDATE : 데이터 수정

    ex)
    UPDATE TABLE SET 
        스키마 = 변경점
    WHERE ROW LIKE"특정조건";

DELETE : 데이터 삭제

    ex)
    
    

# DCL (Data Control Language) 

    데이터베이스에 접근하거나 객체에 권한을 주는등의 역할을 하는 언어

    GRANT : 특정 데이터베이스 사용자에게 특정 작업에 대한 수행 권한을 부여
    REVOKE : 특정 데이터베이스 사용자에게 특정 작업에 대한 수행 권한을 박탈, 회수
    COMMIT : 트랜잭션의 작업을 저장
    ROLLBACK : 트랜잭션의 작업을 취소, 원래대로 복구

# join이란


    내부 조진 (INNER JOIN)
       1. 교차 조인 (CROSS JOIN  - CARTESIN JOIN)
       2. 등가/동등/동일 조인(EQUI JOIN)
       3. 비등가 조인(NON-EQUI JOIN)
       4. 자연 조인 (NATURAL JOIN)

    외부 조인 (OUTER JOIN)
        1.완전 외부 조인 (FULL OUTER JOIN)
        2.왼쪽 (LEFT OUTER)
        3.오른쪽 (RIGHT OUTER)

    셀프 조인 (SELF JOIN)
    안티 조인 (ANTI JOIN)
    세미 조인 (SEMI JOIN)


![join](./img/join.png)

# ORDER BY 

    사용자가 원하는 순서로 출력해주는 것
    오름차순:ASC
    내림차순:DESC

# INSET VS UPDATE VS ALTER

|명령어|차이|
|---|---|
|INSERT|기존 테이블에 새 행을 삽입하는데 사용|
|UPDATE|기존 레코드를 업데이트 하는데 사용|
|ALTER|기존 테이블에 열을 수정, 삭제 또는 추가하는데 사용|
