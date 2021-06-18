// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c
// get_next_line_utils.c 파일을 한 줄씩 읽는다. static변수를 통해서 현재파일의
// 위치를 기억한다. 최종적으로 while문의 조건으로 이 함수의 반환값을 넣어 0이

// 반환되면서 파일을 전부 읽는 구조 read, malloc, free 가능
// read의 반환값 에러시 -1 아니면 읽은 바이트수
// gnl 반환값
// 1 : A line has been read
// 0 : EOF has been reached
// -1 : An error happened

#include "get_next_line.h"
//나중에 요기 지우자
// #define BUFFER_SIZE 32
// \n위치 반환, 널반환하면 없는것

int checkLine(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			i++;
			return (i);
		}
		i++;
	}
	return (0);
}

char *ft_cutter(char *src, int len)
{
	char *str;
	int   i;

	i = 0;
	if (!(str = (char *) malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

int get_next_line(int fd, char **line)
{
	char *       buffer;
	static char *cache;
	int          len;

	len = 0;
	if (!line || fd < 3)
		return (-1);
	while (1)
	{
		if (!(buffer = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1))))
			return (-1);
		if ((read(fd, buffer, BUFFER_SIZE) == -1))
			break;
		buffer[ft_strlen(buffer)] = 0;
		//전에있던 값과 현재 읽은값 이어붙임 free해야댐
		if (!cache)
			cache = ft_strjoin("", buffer);
		else
			cache = ft_strjoin(cache, buffer);
		// 줄바꿈 문자가 len위치에 나왔다는것임
		free(buffer);
		if ((len = checkLine(cache)) > 0)
		{
			*line = ft_cutter(cache, len);
			cache = &cache[len];
			return (1);
		}
		else
		{
			*line = cache;
			return (0);
		}
	}
	free(buffer);
	return (0);
}
// 1. 파일읽는다.
// 2. 읽은 파일을 buffer에 저장한다.
// 3. buffer에 있는 값 중 줄바꿈 문자를 찾는다.
// 3-1. 없으면 버퍼사이즈만큼 파일 한번 더 읽는다.
// 3-2. 문자 보관해놨다가 이어붙여준다.
// 4. 줄바꿈 문자까지 line에 넣어서 반환해준다.
// 5. 이 때 현재 위치를 기억한다.  (HOW?)
// 6. 다음에 들어왔을때 기억했던 위치부터