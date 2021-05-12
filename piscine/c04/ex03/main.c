#include <stdio.h>
int ft_atoi(char *str);
int main()
{
	printf("%d\n", ft_atoi("-- -+-+sds1"));
	printf("%d\n", ft_atoi("---++1234a b567s444R"));
	printf("%d\n", ft_atoi("---+1234ab567s444R"));
	printf("%d\n", ft_atoi("  --- +-+2147483647"));
	printf("%d\n", ft_atoi("----d++2147483647"));
	printf("%d\n", ft_atoi("---+-+1234ab567s444R"));
	printf("%d\n", ft_atoi("---+-+1234ab567s444R"));
}
