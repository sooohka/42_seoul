#include "get_next_line.h"
#include "stdio.h"
#include <fcntl.h>

int main(void)
{
	int   temp;
	int   fd;
	char *line;
	
	fd = open("/Users/sookang/Desktop/42_seoul/gnl/text.txt", O_RDONLY);
	printf("파일 디스크럽터:%d\n", fd);
	while ((temp = (get_next_line(fd, &line)) > 0))
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	printf("finished\n");
	free(line);
	close(fd);
	return (0);
}