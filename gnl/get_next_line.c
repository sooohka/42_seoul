// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c
// get_next_line_utils.c 파일을 한 줄씩 읽는다. static변수를 통해서 현재파일의
// 위치를 기억한다. 최종적으로 while문의 조건으로 이 함수의 반환값을 넣어 0이
// 반환되면서 파일을 전부 읽는 구조 read, malloc, free 가능 read의 반환값 에러시
// -1 아니면 읽은 바이트수
// gnl 반환값
// 1 : A line has been read
// 0 : EOF has been reached
// -1 : An error happened

#include "get_next_line.h"

// \n위치 반환, 널반환하면 없는것

int get_next_line(int fd, char **line)
{
}