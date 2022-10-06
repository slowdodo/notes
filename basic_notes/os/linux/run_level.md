![Run-level](https://blog.kakaocdn.net/dn/bE8TuM/btqJt04U3RC/IqnYnybtWaGYakrm20FrH1/img.png)
# run level

* Run Level
	* 0 
		* Half
			* 시스템 중지
			* 기본값으로 설정 불가
	* S, s
		* 시스템 싱글 유저 모드
		* 로컬 파일시스템이 마운트 되지 않은 상태
	* 1 
		* Single user mode
			* 시스템 싱글 유저 모드
			* 로컬 파일시스템이 마운트 된 상태
			* 시스템 점검/ 복구, root계정 초기화 등 시스템 관리 목적으로 사용
			* 네트워크, 서버, 파일공유 등과 같은 서비스는 안함
	* 2 
		* Multiuser, without NFS
			* 네트워크를 사용하지 않는 다중 사용자 모드
			* NFS 클라이언트 모드
			* 여러 계정으로 로그온 가능
	* 3
		* Full multiuser mode
			* 멀티 유저모드
			* 네트워크를 지원함
			* Unix 기본 런타임 레벨
	* 4
		* Unused
			* 사용하지 않는 런레벨이지만 사용자가 정의 가능
	* 5
		* X11
			* 시스템 power off 모드
			* X Window를 사용하는 다중 사용자 모드
	* 6 
		* Reboot
			* 시스템을 재기동 할 때 사용
			* 기본값으로 설정 불가

