# Oauth (Open Athorization)

다른 웹사이트 상의 자신의 정보에 대해 웹, 앱의 접근 권한을 부여할수있는 방법으로 

간단하게 구글, github, facebook같은 계정으로 다른 웹사이트의 회원가입이 가능하게 하는 기술이라 생각하면 된다.

# Oauth 용어
* 사용자(user): 서비스 제공자와 소비자를 사용하는 계정을 가지고 있는 개인
* 소비자(consumer): Open API를 이용하여 개발된 OAuth를 사용하여 서비스 제공자에게 접근하는 웹사이트 또는 애플리케이션
* 서비스 제공자(service provider): OAuth를 통해 접근을 지원하는 웹 애플리케이션(Open API를 제공하는 서비스)
* 소비자 비밀번호(consumer secret) : 서비스 제공자에서 소비자가 자신임을 인증하기 위한 키
* 요청 토큰(request token) : 소비자가 사용자에게 접근권한을 인증받기 위해 필요한 정보가 담겨있으며 후에 접근 토큰으로 변환된다.
* 접근 토큰(access token) : 인증 후에 사용자가 서비스 제공자가 아닌 소비자를 통해서 보호된 자원에 접근하기 위한 키를 포함한 값.

# Oauth 인증방식

* 소비자가 서비스제공자에게 요청토큰을 요청한다.
* 서비스제공자가 소비자에게 요청토큰을 발급해준다.
* 소비자가 사용자를 서비스제공자로 이동시킨다. 여기서 사용자 인증이 수행된다.
* 서비스제공자가 사용자를 소비자로 이동시킨다.
* 소비자가 접근토큰을 요청한다.
* 서비스제공자가 접근토큰을 발급한다.
* 발급된 접근토큰을 이용하여 소비자에서 사용자 정보에 접근한다.

출처: [wikipedia.org](https://ko.wikipedia.org/wiki/OAuth)  
[Oauth2/naver blog](https://blog.naver.com/mds_datasecurity/222182943542)