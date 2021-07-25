#include "get_next_line.h"
#include "stdio.h"
#include <fcntl.h>

int main(void)
{
	char*   temp;
	int   fd;
	
	fd = open("/Users/sookang/Desktop/42_seoul/gnl/text.txt", O_RDONLY);
	printf("파일 디스크럽터:%d\n", fd);
	// while ((temp = get_next_line(fd)))
	// {
	 	temp=get_next_line(fd);
		printf("%s", temp);
	 	temp=get_next_line(fd);
		printf("%s", temp);
		// temp=get_next_line(fd);
		// printf("%s", temp);
	// }
	close(fd);
	return (0);
}