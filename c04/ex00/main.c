#include <stdio.h>
#include <string.h>
extern int ft_strlen(char *str);
int        main()
{
	char *str1 = "hello";
	char *str2 = "bye";
	printf("%d", (int)strlen(str1));
	printf("%d", (int)strlen(str2));
	printf("%d", ft_strlen(str1));
	printf("%d", ft_strlen(str2));
	printf("%d", (int)strlen(""));
	printf("%d", ft_strlen(""));
}