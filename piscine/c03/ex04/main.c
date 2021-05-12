#include <stdio.h>
#include <string.h>
extern char *ft_strstr(char *str, char *to_find);
int          main()
{
	char str[] = "hello world";
	char str2[] = "hello";
	char str3[] = "bye world";
	char str4[] = "bey";
	char str5[] = "my sname is sooho";
	char str6[] = "sooho";

	printf("str vs str2 string라이브러리 함수: %s\n", strstr(str, str2));
	printf("str vs str2 \t\t내 함수: %s\n", ft_strstr(str, str2));
	printf("str3 vs str4 string라이브러리 함수: %s\n", strstr(str3, str4));
	printf("str3 vs str4 \t\t내 함수: %s\n", ft_strstr(str3, str4));
	printf("str5 vs str6 string라이브러리 함수: %s\n", strstr(str5, str6));
	printf("str5 vs str6 \t\t내 함수: %s\n", ft_strstr(str5, str6));

	return 0;
}