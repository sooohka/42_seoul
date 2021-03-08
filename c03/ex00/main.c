#include <stdio.h>
#include <string.h>
int main()
{
	char s1[20] = "hello world";
	char s2[20] = "hello world";
	char j1[10] = "hi world";
	char j2[10] = "bye world";
	char c1[10] = "aaa";
	char c2[10] = "aab";
	char c3[10] = "aac";
	printf("s1:%s   ", s1);
	printf("s2:%s\n", s2);
	printf("j1:%s   ", j1);
	printf("j2:%s\n", j2);
	printf("c1:%s   ", c1);
	printf("c2:%s   ", c2);
	printf("c3:%s\n", c3);
	printf("---------------\n");
	printf("s1 vs s2\n strcmp function: %d  ", strcmp(s1, s2));
	printf("my function %d\n", ft_strcmp(s1, s2));
	printf("j1 vs j2\n strcmp function: %d  ", strcmp(j1, j2));
	printf("my function %d\n", ft_strcmp(j1, j2));
	printf("c1 vs c2\n strcmp function: %d  ", strcmp(c1, c2));
	printf("my function %d\n", ft_strcmp(c1, c2));
	printf("c3 vs c2\n strcmp function: %d  ", strcmp(c3, c2));
	printf("my function %d\n", ft_strcmp(c3, c2));
}