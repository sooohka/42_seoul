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

int checkLine(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
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

int returner(char **cache, char **line)
{
	int   len;
	char *temp;

	if ((len = checkLine(*cache)) >= 0)
	{
		//줄바꿈이 나온 자리가 len
		*line = ft_cutter(*cache, len);
		temp = ft_strdup(*cache + len + 1);
		free(*cache);
		*cache = temp;
		return (1);
	}
	else if (*cache)
	{
		*line = *cache;
		*cache = 0;
	}
	else
		*line = ft_strdup("");
	return (0);
}

int get_next_line(int fd, char **line)
{
	char         buffer[BUFFER_SIZE + 1];
	static char *cache;
	int          len;
	int          readed;
	char *       temp;
	if (!line || fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (-1);
	while ((readed = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (readed == -1)
			return (-1);
		buffer[readed] = 0;
		if (!cache)
			cache = ft_strdup(buffer);
		else
			cache = ft_strjoin(cache, buffer);
		if ((len = checkLine(cache)) >= 0)
		{
			//줄바꿈이 나온 자리가 len
			*line = ft_cutter(cache, len);
			temp = ft_strdup(&cache[len + 1]);
			free(cache);
			cache = temp;
			return (1);
		}
		// 줄바꿈 문자가 len위치에 나왔다는것임
		// 버퍼 사이즈만큼 읽었을시
	}
	return returner(&cache, line);
}

// 1. 파일읽는다.
// 2. 읽은 파일을 buffer에 저장한다.
// 3. buffer에 있는 값 중 줄바꿈 문자를 찾는다.
// 3-1. 없으면 버퍼사이즈만큼 파일 한번 더 읽는다.
// 3-2. 문자 보관해놨다가 이어붙여준다.
// 4. 줄바꿈 문자까지 line에 넣어서 반환해준다.
// 5. 이 때 현재 위치를 기억한다.  (HOW?)
// 6. 다음에 들어왔을때 기억했던 위치부터