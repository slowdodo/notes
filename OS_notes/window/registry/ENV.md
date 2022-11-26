# 환경변수

|         변수명        	|                   경로                  	|
|:---------------------:	|:---------------------------------------:	|
|  %SystemDrive%        	|  C:\                                    	|
|  %SystemRoot%         	|  C:\Windows                             	|
|  %windir%             	|  C:\Windows                             	|
|  %DriverData%         	|  C:\Windows\System32\drivers\DriverData 	|
|  %ALLUSERSPROFILE%    	|  C:\ProgramData                         	|
|  %ProgramData%        	|  C:\ProgramData                         	|
|  %ProgramFiles%       	|  C:\Program Files                       	|
|  %ProgramFiles(x86)%  	|  C:\Program Files (x86)                 	|
|  %ProgramW6432%       	|  C:\Program Files                       	|
|  %CommonProgramFiles% 	|  C:\Program Files\Common Files          	|
|  %APPDATA%            	|  C:\Users\계정명\AppData\Roaming        	|
|  %LOCALAPPDATA%       	|  C:\Users\계정명\AppData\Local          	|
|  %TEMP%               	|  C:\Users\계정명\AppData\Local\Temp     	|
|  %TMP%                	|  C:\Users\계정명\AppData\Local\Temp     	|
|  %HOMEPATH%           	|  C:\Users\계정명                        	|
|  %USERPROFILE%        	|  C:\Users\계정명                        	|
|  %PUBLIC%             	|  C:\Users\Public                        	|
|  %USERNAME%           	|  계정 폴더                              	|
|  %USERDOMAIN%         	|  http://컴퓨터이름/                     	|
|  %ComSpec%            	|  명령프롬프트(powershell)실행                  	|


# 그외 환경변수

C:＼ProgramData 폴더 반환
``` powershell
%ALLUSERSPROFILE%
```

C:＼Users＼사용자/AppData 폴더 반환. 응용 프로그램이 기본적으로 데이터를 저장하는 위치
``` powershell
%APPDATA%
```

사용자 현재 폴더를 반환.
``` powershell
%CD%
```

현재 명령을 시작하는데 사용된 명령과 명령행 옵션을 반환
``` powershell
%powershellLINE%
```

현재 명령 프로세서 확장의 버전 번호를 반환
``` powershell
%powershellEXTVERSION%
```

컴퓨터 이름을 반환
``` powershell
%COMPUTERNAME%
```

시스템에 설졍된 명령행 프로세스의 정확한 경로를 반환
``` powershell
%COMSPEC%
```

현재 날짜를 반환. date /t명령과 같은 형식을 사용.
``` powershell
%DATE%
```

최근에 사용된 명령의 오류 코드를 반환. 일반적으로 0이 아닌 값은 오류를 표시.
``` powershell
%ERRORLEVEL%
```

사용자 홈 디렉터리에 연결된 로컬 워크스테이션 드라이브 문자를 반환.
``` powershell
%HOMEDRIVE%
```

사용자 홈 디렉터리의 전체 경로를 반환.
``` powershell
%HOMEPATH%
```

사용자의 공유 홈 디렉터리의 네트워크 경로를 반환.
``` powershell
%HOMESHARE%
```

현재 로그온 세션을 확인한 도메인 컨트롤러 이름을 반환.
``` powershell
%LOGONSEVER%
```

컴퓨터에 설치된 프로세서의 수를 표시.
``` powershell
%NUMBER_OF_PROCESSORS%
```

운영 체제 이름을 반환. 윈도우10은 운영 체제를 Windows_NT로 표시.
``` powershell
%OS%
```

실행 파일을 검색할 경로를 지정.
``` powershell
%PATH%
```

운영 체제에서 실행 가능하다고 간주되는 파일 확장명 목록을 반환.
``` powershell
%PATHEXT%
```

프로세서의 칩 아키텍처를 반환합. AMD 64비트 시스템의 경우 AMD64 반환
``` powershell
%PROCESSOR_ARCHITECTURE%
```

프로세서의 설명을 반환
``` powershell
%PROCESSOR_IDENTFIER%
```

컴퓨터에 설치된 프로세서의 모델 수를 반환.
``` powershell
%PROCESSOR_LEVEL%
```

프로세서의 수정 버전 번호를 반환.
``` powershell
%PROCESSOR_REVISION%
```

명령 프롬프트 설정을 반환.
``` powershell
%PROMPT%
```

0에서 32767까지 수 중에서 임의의 10진수를 반환.
``` powershell
%RANDOM%
```

루트 디렉터리(시스템 루트)가 있는 드라이브를 반환.
``` powershell
%SYSTEMDRIVE%
```

C:＼Windows처럼 루트 디렉터리의 위치를 반환.
``` powershell
%SYSTEMROOT%
```

시스템 및 사용자 현재 로그온한 사용자가 사용할 수 있는 응용 프로그램이 사용하는 기본 임시 디렉터리를 반환.

일부 응용 프로그램에는 TEMP가 필요하고 다른 프로그램은 TMP가 필요함.
``` powershell
%TEMP%와 %TMP%
```

현재 시간을 반환. time /t명령과 같은 형식을 사용.
``` powershell
%TIME%
```

사용자 계정을 포함한 도메인 이름을 반환.
``` powershell
%USERDOMAIN%
```

현재 로그온한 사용자 이름을 반환.
``` powershell
%USERNAME%
```

현재 사용자의 프로필 위치를 반환.
``` powershell
%USERPROFILE%
```

C:＼Windows처럼 운영 체제가 설치된 폴더의 경로를 반환.
``` powershell
%WINDIR%
```