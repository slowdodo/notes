
# 순차 자료구조 개념

    구현할 자료들은 논리적 순서로 메모리에 연속 저장하는 구현 방식
    논리적인 순서와 물리적인 순서가 항상 일치
    프로그램 기법은 배열


# 선형리스트 연결리스트 장단점

|구분|순차(선형) 자료구조|연결 자료구조|
| --- | --- | --- |
|메모리 저장 방식|모든 데이터가 메모리에 연속적으로 저장, 논리적 순서와 물리적 순서가 일치|데이터는 노드에 저장되고, 노드는 메모리 곳곳에 흩어짐, 순서와 상관없이 링크에 의해 논리적인 순서를 표현|
|연산 특징|삽입, 삭제를 해도 빈자리 없이 자료가 순서대로 저장, 임의의 데이터에 즉각 접근 가능|임의 데이터에 접근하는 것은 O(n) 복잡도를 가짐, 논리적 순서가 변경되어도, 링크 정보만 변경되고 물리적 순서는 변경안됨|
|프로그램 기법|배열을 이용하여 구현|포인터를 이용하여 구현|


# 순차(선형)와 연결(리스트) 자료구조의 개념

    선형(순차) 리스트: 배열과 같이 연속되는 기억 장소에 저장되는 리스트

    연결 리스트: 자료들이 반드시 연속적으로 배열되어있지 않아도 노드 포인터 부분을 이용하여 서로 연결된 구조



# 배열 (Array)

    - 동일한 자료형의 데이터들이 같은 크기로 나열됨

    - 순서를 갖고 있는 집합

    - 기억장소의 추가가 어려움

    - 데이터 삭제 시 메모리 낭비 발생

 

# 연결리스트 (Linear List)

    - 노드의 포인터를 이용해 서로 연결시킨 자료 구조

    - 노드의 삽입, 삭제 작업이 용이함

    - 링크가 필요하기 때문에 순차 리스트에 비해 기억 공간의 이용 효율이 좋치 않음

    - 포인터를 찾아야해서 접근 속도가 느림

 

# 스택 (Stack)

    - 리스트의 한쪽 끝으로만 삽입,삭제 작업이 이루어지는 자료 구조

    - 가장 나중에 삽입된 자료가 먼저 삭제되는 후입선출(LIFO)

 

# 큐 (Queue)

    - 한쪽에서는 삽입 작업이 이루어지고 한쪽에서는 삭제 작업이 이루어지도록 구성한 자료 구조

    - 가장 먼저 삽입된 자료가 먼저 삭제되는 선입선출(FIFO)

    - 운영체제의 작업 스케줄링에 사용함

 

# 데크 (Deque)

    - 삽입과 삭제가 리스트의 양쪽 끝에서 모두 발생 가능

    - 스택과 큐의 장점만 따서 구성됨