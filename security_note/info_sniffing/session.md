# Session이란 

세션은 개별 클라이언트 상태정보를 서버에 저장하는 기술이다.

일정 시간동안 방문자가 웹 브라우저를 통해 접속과 종료 등을 처리하거나 하는데 사용하는 기술

대부분 로그인 로그아웃을 처리하는데 사용한다.

![session](https://t1.daumcdn.net/cfile/tistory/033B5F5050C9992408)


## Http_session

1. HTTP Session이란?
    * session이란 서버가 해당 서버(웹)로 접근(request)한 클라이언트(사용자)를 식별하는 방법

    * 서버(웹)는 접근한 클라이언트(사용자)에게 response-header field인 set-cookie 값으로 클라이언트 식별자인 session-id(임의의 긴 문자열)를 발행(응답)한다.
    * 서버로부터 발행(응답)된 session-id는 해당 서버(웹)와 클라이언트(브라우저) 메모리에 저장된다. 이때 클라이언트 메모리에 사용되는 cookie 타입은 세션 종료 시 같이 소멸되는 "Memory cookie"가 사용된다.
    * 서버로부터 발행된 session(데이터)을 통해 개인화(사용자)를 위한 데이터(userInfo 등..)로 활용할 수 있다.

2. HTTP Session 동작 순서
    * 클라이언트(사용자)가 서버로 접속(http 요청)을 시도한다.
    * 서버(웹)는 접근한 클라이언트의 request-header field인 cookie를 확인해 클라이언트가 해당 session-id를 보내왔는지 확인한다.
    * 만약 클라이언트로 부터 발송된 session-id가 없다면, 서버는 session-id를 생성해 클라이언트에게 response-header field인 set-cookie 값으로 session-id(임의의 긴 문자열)를 발행(응답)한다.
