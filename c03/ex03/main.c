
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

	printf("%s", strncat(c1, c3, 0));
	return (0);
}
