#include <stdio.h>
#include <stdlib.h>
extern unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char  src[10000] = "hello";
	char dest[1000];
	printf("%d\n", ft_strlcpy(dest, src, 1));
	printf("%s",dest);
	return (0);
}