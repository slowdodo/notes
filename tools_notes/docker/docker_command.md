Docker run 옵션 종류

    -i, --interactive
        표준 입력(stdin)을 활성화하며, 컨테이너와 연결(attach)되어 있지 않더라도 표준 입력을 유지합니다.
        보통 이 옵션을 사용하여 Bash 에 명령을 입력합니다.
    -t, --tty
        TTY 모드(pseudo-TTY)를 사용합니다.
        Bash를 사용하려면 이 옵션을 설정해야 합니다.
        이 옵션을 설정하지 않으면 명령을 입력할 수는 있지만, 셸이 표시되지 않습니다.
    --name
        컨테이너 이름을 설정합니다.
    -d, --detach
        Detached 모드입니다.
        보통 데몬 모드라고 부르며, 컨테이너가 백그라운드로 실행됩니다.
    -p, --publish
        호스트와 컨테이너의 포트를 연결합니다. (포트포워딩)
        <호스트 포트>:<컨테이너 포트>
            -p 80:80
    --privileged
        컨테이너 안에서 호스트의 리눅스 커널 기능(Capability)을 모두 사용합니다.
        호스트의 주요 자원에 접근할 수 있습니다.
    --rm
        프로세스 종료시 컨테이너 자동 제거
    --restart
        컨테이너 종료 시, 재시작 정책을 설정합니다.
            --restart="always"
    -v, --volume
        데이터 볼륨을 설정입니다.
        호스트와 컨테이너의 디렉토리를 연결하여, 파일을 컨테이너에 저장하지 않고 호스트에 바로 저장합니다. (마운트)

-u, --user

    컨테이너가 실행될 리눅스 사용자 계정 이름 또는 UID를 설정합니다.
        --user root

-e, --env

    컨테이너 내에서 사용할 환경 변수를 설정합니다.
    보통 설정 값이나 비밀번호를 전달할 때 사용합니다.
        -e GRANT_SUDO=yes

--link

    컨테이너끼리 연결합니다.
    [컨테이너명 : 별칭]
        --link="db:db"

-h, --hostname

    컨테이너의 호스트 이름을 설정합니다.

-w, --workdir

    컨테이너 안의 프로세스가 실행될 디렉터리를 설정합니다.

-a, --attach

    컨테이너에 표준 입력(stdin), 표준 출력(stdout), 표준 에러(stderr) 를 연결합니다.

-c, --cpu-shares

    CPU 자원 분배 설정입니다.
    기본 값은 1024이며, 각 값은 상대적으로 적용됩니다.

-m, --memory

    메모리 한계를 설정합니다.
    <숫자><단위> 형식이며 단위는 b, k, m, g 를 사용할 수 있습니다
        --memory=”100000b”

--gpus

    컨테이너에서 호스트의 NVIDIA GPU 를 사용할 수 있도록 설정합니다.
        호스트는 NVIDIA GPU 가 장착 된 Linux 서버여야하며,
        NVIDIA driver 가 설치되어 있어야하고,
        docker 19.03.5 버전 이상이어야합니다.
    GPU 모두 사용하기
        --gpus all
    GPU 지정해서 사용하기
        --gpus ‘”device=0,1”’

--security-opt

    SELinux, AppArmor 옵션을 설정합니다.
        --security-opt=”label:level:TopSecret”

그외 도커 명령어들

https://www.fosstechnix.com/docker-command-cheat-sheet/
