# 1 단계 디렉토리(Single Level Directory)
![level_1_dir](https://static.javatpoint.com/operating-system/images/os-single-level-directory.png)

* 가장 간단한 구조
* 모든 파일들이 다 같이 한 개의 디렉터리 밑에 있는 구조
* 모든 파일명은 유일 해야한다.

### 장점

* 구현이 쉬움
* 파일들의 크기가 작으면, 검색이 더 빠름
* 파일 생성, 탐색, 삭제가 쉬움

### 단점
* 동일 이름의 파일을 만들 수 없음
* 디렉터리의 크기가 클 수록 탐색이 더 오래 걸림
* 다중 사용자를 위한 보호부분의 구현에 어려움이 존재한다.
* 파일들에 대한 그룹화 관련 방법이 없다.
* 운영체제는 파일명 길이의 제한이 있기 떄문에, 독립적 이름에 대한 한계가 있다.

# 2 단계 디렉토리(Two Level Directory)
![level_2_dir](https://static.javatpoint.com/operating-system/images/os-two-level-directory.png)
* 중앙에 마스터 디렉터리(master directory)가 존재하고 그 아래 사용자 디렉터리가 있는 구조
* 다른 사용자와의 파일 공유가 불가
* 파일명 표현 방식
    * 예: <사용자1>/user/hello.txt

### 마스터란?
* 각 사용자의 이름이나 계정 번호를 가리키는 포인터정보를 갖는 곳

## 장점
* 동일한 이름의 파일을 만들수 있다.
* 디렉터리로 파일들을 각 목적에 맞게 분류가 가능하다.
* 디렉터리별 보호하기가 쉬워진다.

## 단점
* 파일명이 길어진다.

# 트리 구조 디렉터리(Tree Directory)
![Tree_dir](https://static.javatpoint.com/operating-system/images/os-tree-structured-directory.png)
* 하나의 루트 디렉터리와 여러 개의 부(종속, 서브) 디렉터리로 구성한다.
    * 부 디렉터리는 그 하위로 또다른 디렉터리를 구성할 수 있다.
* 각 디렉터리의 생성과 삭제가 용의하다.
* 동일한 이름의 여러 디렉터리 생성이 가능하다.
* 다양한 운영체제에서 사용됨
    * ex) Unix(Linux,iOS), MS-DOS, Window

## 루트 디렉터리
* Root Directory
* 트리나 그래프구조의 디렉터리구조에서 최상위 디렉터리를 의미한다.

# 비순환 그래프 디렉터리(Acyclic Graph Directory)
![Acyclic_Graph_Dir](https://static.javatpoint.com/operating-system/images/os-acyclic-graph-structured-directories.png)
* 트리 구조와 유사하다.
* 사이클을 허용하지 않는다.
* 하나의 파일이나 디렉터리를 상위 디렉터리에서 공유가 가능하다.
* 링크의 개념이 존재하다.
    * 링크의 수가 0이면 삭제된 것이다.
    * 하나의 파일이 다수의 이름으로 존재할 수 있다.
* "UNIX에서 지원"한다.


# 일반 그래프 디렉터리(General Graph Directory)
![일반 그래프 디렉터리](https://mblogthumb-phinf.pstatic.net/20130712_81/jevida_137361494661527aAP_PNG/5.png?type=w2)
* 사이클을 허용
* 사이클로 인해 하나의 파일이나 디렉터리를 상위 디렉터리와 공용할 수 있다.
* 파일을 제거하기 위한 자투리 모음(Garbage-Collection)용 계수기가 별도로 필요하다.
* 단, 디렉터리 크기 및 측정 파일의 총 개수 등의 분석이 사이클로 인해 어렵다.
* UNIX에서 지원한다.


[자세한 내용](https://www.javatpoint.com/os-single-level-directory)