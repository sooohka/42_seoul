
#include <stdio.h>
#include <string.h>
extern int ft_strncmp(char *s1, char *s2, unsigned int n);
int        main()
{
	char s1[20] = "hello world";
	char s2[20] = "hello world";
	char j1[10] = "hi world";
	char j2[10] = "bye world";
	char c1[10] = "aaa";
	char c2[10] = "aab";
	char c3[10] = "aac";
	char d1[10] = "\200";
	char d2[10] = "\0";

	printf("s1:%s   ", s1);
	printf("s2:%s\n", s2);
	printf("j1:%s   ", j1);
	printf("j2:%s\n", j2);
	printf("c1:%s   ", c1);
	printf("c2:%s   ", c2);
	printf("c3:%s\n", c3);
	printf("d1:%s   ", d1);
	printf("d2:%s\n", d2);
	printf("---------------\n");
	printf("s1 vs s2  n==5\n strncmp function: %d  ", strncmp(s1, s2, 5));
	printf("my function %d\n", ft_strncmp(s1, s2, 5));
	printf("j1 vs j2  n==10\n strncmp function: %d  ", strncmp(j1, j2, 10));
	printf("my function %d\n", ft_strncmp(j1, j2, 10));
	printf("c1 vs c2  n==3\n strncmp function: %d  ", strncmp(c1, c2, 3));
	printf("my function %d\n", ft_strncmp(c1, c2, 3));
	printf("c3 vs c2  n==3\n strncmp function: %d  ", strncmp(c3, c2, 3));
	printf("my function %d\n", ft_strncmp(c3, c2, 3));
	printf("d1 vs d2\n strncmp function: %d  ", strncmp(d1, d2, 0));
	printf("my function %d\n", ft_strncmp(d1, d2, 0));
	printf("d1 vs d2\n strncmp function: %d  ", strncmp(d1, d2, 1));
	printf("my function %d\n", ft_strncmp(d1, d2, 1));
	printf("d1 vs d2\n strncmp function: %d  ", strncmp(d1, d2, 2));
	printf("my function %d\n", ft_strncmp(d1, d2, 2));
	printf("d1 vs d2\n strncmp function: %d  ", strncmp(d1, d2, 3));
	printf("my function %d\n", ft_strncmp(d1, d2, 3));
	printf("d1 vs d2\n strncmp function: %d  ", strncmp(d1, d2, 4));
	printf("my function %d\n", ft_strncmp(d1, d2, 4));
}