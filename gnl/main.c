#include "get_next_line.h"
#include "stdio.h"
#include <fcntl.h>

int main(void)
{
	int   temp;
	int   fd;
	char *line;

	fd = open("/Users/sookang/Desktop/42_seoul/gnl/text.txt", O_RDONLY);
	while ((temp = (get_next_line(fd, &line)) > 0))
	{
		printf("%s", line);
		free(line);
		printf("line read!!\n");
	}
	printf("%s\n", line);
	free(line);
	close(fd);
	return (0);
}