# 순차 접근 파일(Sequential Access File)
![Seqntial_Aceess](https://www.itrelease.com/wp-content/uploads/2018/10/Sequential-Access-Meaning-1.jpg)
* 입력되는 데이터가 물리적으로 연속적인 위치에 기록되는 방식
* 파일의 내용이 하나의 연속된 줄형태로 기록
* 연속적 데이터 접근을 기반한 매체(자기 테이프)에서 가장 효율적임

* 장점
	* 저장 효율이 높음
	* 낭비되는 저장 공간이 없음
	* 데이터의 빠른 읽기/쓰기가 가능
* 단점
	* 내용 갱신 및 중간 삽입이 비효율적임
	* 위치 이동 시 너무 오래 걸림

# 직접 접근 파일(Direct Access File)
![Direct Access File](https://s3.amazonaws.com/media.nngroup.com/media/editor/2014/06/19/2014-06-16_direct-access.png)
* 물리적인 저장매체의 주소에 직접 접근하는 방식
	* 전문 지식 필요
* 해시(hash) 기법을 사용
* 사상(mapping) 함수와 표가 필요
### 장점
* 블록의 개수가 많더라도 빠른 접근이 가능
* 어떤 레코드라도 평균 접근 시간 내에 접근 가능
### 단점
* 해시 충돌에 대한 해결방안이 필요
* 키 변환법에 따라 공간의 낭비를 가져올 수 있음


# 인덱스 접근 파일(Indexed Sequential Access File)
![Index_Access_File](https://static.javatpoint.com/dbms/images/dbms-indexed-sequential-access-method.png)
* 순차 파일 구조에 인덱스를 위한 필드를 추가한 방식
* 주로 디스크 기반의 저장매체에서 사용
* 현대의 기록매체에서 주로 사용하는 방식

### 장점
* 빠른 접근 및 위치 이동이 가능
* 중간에 삽입 및 변경이 쉬움

### 단점
* 내부 단편화가 발생
* 디스크의 낭비가 발생될 수 있음(ß 가성비 고려 대용량으로 극복)
* 인덱스를 처리하는 추가적인 시간이 소모
* 인덱스 저장 공간 및 오버플로 처리를 위한 별도 공간 필요ß 공간 낭비


## 3단계 물리적 색인 구역(Index Area)
* Master Index
* Cylinder Index
* Track Index
### 기본 데이터 구역(Prime Data Area)
* 실제 데이터가 기록된 구역
### 오버플로 구역(Overflow Area)
* Cylinder Overflow
* Independent Overflow
