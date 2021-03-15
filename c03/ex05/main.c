
#include <stdio.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char src[] = "good morning";
	char dst[] = "hello";
	int  i;
	i = 0;
	printf("src sizeof =%lu,src=%s\n", sizeof(src), src);
	printf("dst sizeof =%lu,dst=%s\n", sizeof(dst), dst);
	printf("dst sizeof=%u, dst=%s\n", ft_strlcat(dst, src, 5), dst);
}