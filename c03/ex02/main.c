
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "hello world";
	char s2[] = "hello world";
	char j1[30] = "hi world";
	char j2[] = "bye world";
	char c1[30] = "aaa";
	char c2[] = "aab";
	char c3[30] = "aac";

	printf("s1:%s   ", s1);
	printf("s2:%s\n", s2);
	printf("j1:%s   ", j1);
	printf("j2:%s\n", j2);
	printf("c1:%s   ", c1);
	printf("c2:%s   ", c2);
	printf("c3:%s\n", c3);
	printf("---------------\n");
	printf("s1 vs s2  \n strcat function: %s  |", strcat(s1 , s2));
	printf("my function %s\n", ft_strcat(s1, s2));
	printf("j1 vs j2  \n strcat function: %s  |", strcat(j1, j2));
	printf("my function %s\n", ft_strcat(j1, j2));
	printf("c1 vs c2  \n strcat function: %s  |", strcat(c1, c2));
	printf("my function %s\n", ft_strcat(c1, c2));
	printf("c3 vs c2  \n strcat function: %s  |", strcat(c3, c2));
	printf("my function %s\n", ft_strcat(c3, c2));

	return (0);
}
