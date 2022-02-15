# pipex

## 목적

```sh
	$> ./pipex file1 cmd1 cmd2 file2
```

```sh
	$> < file1 cmd1 | cmd2 > file2
```

위의 결과가 아래 결과와 같아야함


##함수
- pipe: 파일디스크립터를 미리 할당해 자식과 부모간의 데이터를 주고받을 수 있음.프로세스내에서 fork함수랑 같이써야함
- fork: 자식 프로세스는 부모 프로세스의 file descriptor의 복사본을 가진다. 부모와 자식 프로세스의 file descriptor는 같은 파일을 가리킨다.
- dup2: 첫번째 매개변수 fd를 두번째 매개변수 fd로 할당

## 구상
1. 읽는 파일 file1에 fd를 할당
2. 출력 파일 file2에 fd를 할당
3. pipe함수를 통해 읽는 fd와 출력하는 fd를 설정한다.
4. fork함수를 통해 자식프로세스 생성
5. 부모 프로세스에서 dup2함수를 활용해 file1을 표준입력으로, pipe로 만든 출력fd에 표준출력을 할당 후
	exec함수를 통해 첫번째 커맨드 실행
6. 자식 프로세스에서 pipe로 만든 입력fd를 표준입력으로, file2를 표준출력으로 할당 후 
	exec함수로 두번째 커맨드 실행후 종료


 

