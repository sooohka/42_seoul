#include <stdio.h>

int ft_atoi_base(char *str, char *base);
int main()
{
	char a[] = "912";
	char b[] = "0123456789";
	printf("str:%s base: %s value:%d\n", a, b, ft_atoi_base(a, b));
	char *str = "4f";
	char *base = "0123456789abcdef";
	printf("str:%s base: %s value:%d", str, base, ft_atoi_base(str, base));
}