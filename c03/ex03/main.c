
#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);
int          main()
{
	char s1[100] = "hello world";
	char s2[100] = "hello world";
	char j1[100] = "hi world";
	char j2[100] = "bye world";
	char c1[100] = "aaa";
	char c2[100] = "aab";
	char c3[100] = "aac";

	printf("s1:%s   ", s1);
	printf("s2:%s\n", s2);
	printf("j1:%s   ", j1);
	printf("j2:%s\n", j2);
	printf("c1:%s   ", c1);
	printf("c2:%s   ", c2);
	printf("c3:%s\n", c3);
	printf("---------------\n");
	printf("s1 vs s2  \n strncat function: %s  |", strncat(s1, s2, 5));
	printf("my function %s\n", ft_strncat(s1, s2, 5));
	printf("j1 vs j2  \n strncat function: %s  |", strncat(j1, j2, 5));
	printf("my function %s\n", ft_strncat(j1, j2, 5));
	printf("c1 vs c2  \n strncat function: %s  |", strncat(c1, c2, 5));
	printf("my function %s\n", ft_strncat(c1, c2, 5));
	printf("c3 vs c2  \n strncat function: %s  |", strncat(c3, c2, 5));
	printf("my function %s\n", ft_strncat(c3, c2, 5));

	return (0);
}
