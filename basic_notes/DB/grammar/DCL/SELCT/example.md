# Select 문법

테이블명에 해당하는 테이블의 칼럼명에 데이터를 불러는 구문입니다

모든 칼럼을 불러오고 싶을 때는 컬럼 명부분에 ' * ' 넣으시면 됩니다

``` sql
SELECT 컬럼명 FROM 테이블명
```

WHERE 구문을 추가해서 WHERE절 뒤에 오는 조건이 참인 데이터만 불러옵니다

[ 컬럼명 = 값 ]으로 적을 경우 컬럼 명의 값이 지정한 값인 데이터행의 데이터만 불러옵니다

``` sql
SELECT 컬럼명 FROM 테이블명 WHERE 조건
```


ORDER BY 뒤에 오는 칼럼명을 기준으로 대하여 불러오는 데이터를 정렬합니다 

ASC는 오름차순, DESC는 내림차순입니다 기본값은 오름차순으로 정렬이 됩니다

``` sql
SELECT 컬럼명 FROM 테이블명 WHERE 조건 ORDER BY 컬럼명 ASC or DESC
```

LIMIT 구문을 추가하여 데이터행이 많을 때에는 LIMIT절의 개수만큼 데이터를 불러옵니다

``` sql
SELECT 컬러명 FROM 테이블명 WHERE 조건 ORDER BY 컬럼명 ASC or DESC LIMIT 개수
```

# 실전예제

```

```