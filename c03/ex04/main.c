#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "hello world";
	char str2[] = "hello";
	char str3[] = "bye world";
	char str4[] = "bey";

	printf("str vs str2 string라이브러리 함수: %s\n", strstr(str, str2));
	printf("str vs str2 \t\t내 함수: %s\n", strstr(str, str2));
	printf("str3 vs str4 string라이브러리 함수: %s\n", strstr(str3, str4));
	printf("str3 vs str4 \t\t내 함수: %s\n", strstr(str3, str4));
	return 0;
}