# 디스크와 디스크 스케줄링
디스크 공간 연속 할당 기법: 연속할당, 연결할당, 인덱스할당
디스크 스케줄링 기법: 다수의 사용자가 입출력을 요청할때 보다 효율적으로 요청을 처리하기 위한 것.
- FCFS(First Come First Service)
- SSTF(Shortest Seek Time First)
	준비상태 큐에 올라온 트랙 중 현재 헤드가 위치한 트랙에서 가장 가까운 트랙을 
    먼저 처리
- SCAN
	SSTF와 비슷하게 동작하지만, 진행방향에서 가장가까운 트랙으로 선택
- C-SCAN
	SCAN과 비슷하지만 헤드가 항상 바깥쪽 -> 안쪽으로 오면서 가까운거리에 있는 트랙을
    처리한다
디렉토리 구조
1단계 디렉토리
모든파일이 같은 디렉토리에 있어서 파일이름을 구분해야됨
2단계 디렉토리
사용자마다 별도의 사용자 디렉토리를 가지고 있음
부팅시 마스터 파일 디렉토리(MFD)를 먼저 탐색함
트리구조 디렉토리
사용자들마다 종속 디렉토리를 생성한다, 모든파일의 고유한 경로를 가지고 있다
비순환 그래프 디렉토리
디렉토리나 파일구조를 허용하는 구조'
일반적인 그래프 디렉토리
순환가능 구조
윈도우 파일 시스템
FAT(file allocation table): 하드디스크에 파일조각(클러스터)들이 저장된 위치를 가지고 있는 테이블
FAT16: 65535개 정도의 클러스터를 사용하여 하드웨어 용량이 커지면 클러스터의 수도 커져서 낭비요소가 발생된다.
FAT32: 클러스터의 수가 작아 비효율적이고, 4G이상의 파일을 처리하지 못한다
NTFS(new technology file system): 클러스터의 개수가 FAT32보다 많고, 파일을 연속적인 블록에 저장하여 파일엑세스 속도가 빠르며 데이터 저장중 에러 발생시 데이터 보호기능제공, 파일압축기능 제공(Window XP부터 적용되어 DOS로 파일 읽기 불가)
UNIX 계열 파일 시스템
디렉토리 영역: 파일이름과 inode영역의 파일번호 저장
inode 영역: 파일번호를 제외한 파일의 모든정보 저장
ex2: 리눅스의 파일시스템으로, fsck(file system check) 라고하여 데이터 저장 도중 문제가 생기면 파일시스템을 복구하는 기능이 있다.
ex3: ex2의 fsck가 복구시간이 느리고 복구시 시스템 사용불가의 문제를 해결하기 위해 저널링(journaling) 기능제공
journaling이란? write 시 로그를 남겨 비정상 셧다운이 이를이용하여 안정적인 복구
ex4: 저널체크섬기능을 추가하여 파일시스템의 손상가능성을 더욱 감소