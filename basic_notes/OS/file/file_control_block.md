# 파일 제어 블록
### 정의
* File Control Block
* 파일을 관리하기 위해 운영체제가 필요로 하는 정보
* 파일마다 독립적으로 가짐
* 프로세스가 Open하면 FCB가 운영체제 내에서 생성되어 주기억 장치에서 관리
* 운영체제는 프로세스에게 FCB의 접근을 위해 파일 디스크립터(file descriptor)로 알려줌
# 주요 항목
* 파일명
* 보조 기억장치의 유형(디스크, 테이프, USB 메모리 등) 및 파일 위치
* 파일의 구조: 순차 파일, 직접 파일, 색인 파일 등
* 파일 소유자 및 접근(Access) 권한
* 파일 유형: 텍스트, 바이너리 등
* 생성 시간, 최종 수정 날자
* 접근 횟수
* 기타