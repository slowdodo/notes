# 버퍼오버플로우 방지
* 경계값 체크나 파라미터 체크를 통해 방지(불완전한 parameter 체크는 버퍼 오버플로우를 발생시킨다)
* 벤더에서 제공하는 소프트웨어 관련 패치를 적용한다.
* 역공학 또는 프로그램 동작에 대한 관찰을 통해 발견하거나 교정한다.
* 최소권한으로 프로그램을 실행한다.

# 사용을 자제하는 함수 (c언어 버전)
strcat(), strcpy(), gets(), scanf(), sscanf(), vscanf(), vsscanf(), sprintf(), vsprint(), gethostbyname(), realpath()

# 사용을 권장하는 함수
strncat(), strncpy(), fgets(), fscanf(), vfscanf(), snprintf(), vsnprintf()