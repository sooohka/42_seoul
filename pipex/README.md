# pipex

## 프로그램 목적

> shell의 pipe 명령을 수행하는 pipex프로그램 작성

[요구사항](./pipex.pdf)

```sh
$> ./pipex file1 cmd1 cmd2 file2
```

```sh
$> < file1 cmd1 | cmd2 > file2
```

위의 결과가 아래 결과와 같게 만들기

## Installation

```sh
git clone https://github.com/sooohka/pipex.git
cd path/to/pipex
make
./pipex file1 cmd1 cmd2 file2
```

## 함수

- pipe: 파일디스크립터를 미리 할당해 자식과 부모간의 데이터를 주고받을 수 있음.프로세스내에서 fork함수랑 같이써야함
- fork: 자식 프로세스는 부모 프로세스의 file descriptor의 복사본을 가진다. 부모와 자식 프로세스의 file descriptor는 같은 파일을 가리킨다.
- dup2: 첫번째 매개변수 fd를 두번째 매개변수 fd로 할당
- access: 파일 권한체크

## 구상

1. 읽는 파일 file1에 fd를 할당
2. 출력 파일 file2에 fd를 할당
3. pipe함수를 통해 읽는 fd와 출력하는 fd를 설정한다.
4. fork함수를 통해 자식프로세스 생성
5. 부모 프로세스에서 dup2함수를 활용해 file1을 표준입력으로, pipe로 만든 출력fd에 표준출력을 할당 후exec함수를 통해 첫번째 커맨드 실행
6. 자식 프로세스에서 pipe로 만든 입력fd를 표준입력으로, file2를 표준출력으로 할당 후 exec함수로 두번째 커맨드 실행후 종료

## 회고

- 파일디스크럽터를 자유자재로 활용할 수 있게됨
- fork의 개념을 이해함
- pipe명령어의 작동 원리, 표준입출력에 대해 명확하게 이해함
