# 보안설정방법
* 웹 서버 환경설정에서 디렉터리 인덱싱 기능 제거

# 웹 서버 별 상세 설정

* Apache
```jsp
httpd.conf 파일 내 DocumentRoot 항목의 Options에서 Indexes 제거
Indexes가 해당 디렉터리의 파일 목록을 보여주는 지시자임
설정 전
<Directory “/var/www/html”>
Options Indexes
</Directory>
설정 후
<Directory “/var/www/html”>
Options
</Directory>
```
# IIS 7.0
설정 > 제어판 > 관리도구 > “인터넷 서비스 관리자” 선택 후 해당 웹 사이트에서 우클릭 후
등록 정보 > [홈 디렉터리] 탭 > [디렉터리 검색] 체크 해제
# IIS 7.5/8.0/8.5/10.0
IIS(인터넷 정보 서비스) 관리자 > [해당 웹 사이트] > [IIS] > [디렉터리 검색] 선택
우측의 [사용 안 함] 버튼을 눌러 비활성화



# WebtoB 설정
1) ${WEBTOBDIR}/config/http.m 파일 Options 항목에서 index 옵션 삭제 또는, –index
옵션으로 설정 ( default: -index )
```bash
2) ${WEBTOBDIR}/config/http.m에서 확인
# ${WEBTOBDIR}/config/http.m *NODE
GuideSample WEBTOBDIR=”/home/user/webtob”,
 SHMKEY = 54000,
 DOCROOT=”/home/user/webtob/docs”,
 PORT = “8080”,
 HTH = 1,
 LOGGING = "log1",
 ERRORLOG = "log2",
 Options = “-index”
```
3) 확인 후 설정파일 컴파일 및 재구동
* wscfl -i http.m (http.m 파일 컴파일)
* wsdown
* wsboot (재구동)

# iPlanet
1) 관리자 콘솔에서 설정 (※ 1번 또는, 2번 방법 중 선택 적용)
관리자 콘솔 > Server Name > Virtual Server Class > Class Manage > Content
Mgmt > Document Preferences > Directory Indexing 항목 "None" 설정
