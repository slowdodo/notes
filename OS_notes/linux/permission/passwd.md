# /etc/passwd

/etc/passwd 파일 형식
[(1)`user_account`]:[(2)`user_password`]:[(3)`user_ID`]:[(4)`group_ID`]:[(5)`comment`]:[(6)`home_directory`]:[(7)`login_shell`]
| 호	|     필드명		|                                                                                                                                                내용																																					|
|:--:	|:--------------:	|:--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:	|
|  ①	|  user_account		| 사용자 계정명, root 계정은 시스템에 대한 총괄 권한을 가지고 있는 계정으로 공격자의 목표가 될 수 있으므로 원격 접속을 금지하는 것이 보안상 안전하다. 일반적으로 root 계정으로 su(switch user) 명령을 허용하는 계정 그룹을 생성한 후 해당 계정으로 접속 후 root 계정으로 전환하여(su 명령) 사용한다.	|
|  ②	|  user_password	| 사용자 패스워드, x의 의미는 패스워드를 사용하지 않는다는 것이 아니라 shadow 패스워드 방식을 사용한다는 의미이다.																																														|
|  ③	|       UID			| 사용자 ID(User ID), root 계정의 경우 0으로 부여한다. UID는 중복되어 사용될 수 있으며 동일한 UID가 부여된 계정은 계정명이 달라도 동일한 권한을 부여받는다. 따라서 임의로 생성된 계정에 UID가 0으로 부여되어 있다면 root 권한 탈취를 위한 행위로 의심해 보아야 한다.									|
|  ④	|       GID			| 사용자 기본 그룹ID(Group ID), root 그룹의 경우 0으로 부여한다. GID도 UID와 동일하게 중복되어 부여될 수 있으므로 임의로 생성된 그룹에 GID가 0으로 부여되어 있는지 점검해야 한다.																														|
|  ⑤	|     comment		| 설명, 사용자 관련 기타 정보로 일반적으로 사용자 ID를 설정한다.																																																										|
|  ⑥	| home_directory	| 홈 디렉터리, 로그인에 성공한 후에 사용자가 위치할 홈 디렉터리로 root 계정은 /root 디렉터리를 사용하며 일반 사용자는 /home 디렉터리 하위에 위치한다.																																					|
|  ⑦	|   login_shell		| 로그인 쉘(shell), Linux의 경우 기본 쉘로 bash shell을 사용하며, 로그인이 불필요한 계정(일반적으로 시스템 및 어플리케이션 계정)에 대해서는 로그인을 금지하는 것이 보안 상 안전하다.																													|