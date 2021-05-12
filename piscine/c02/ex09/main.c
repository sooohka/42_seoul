#include <stdio.h>

extern char *ft_strcapitalize(char *str);
int main(void)
{
	char str[1000]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s",ft_strcapitalize(str));
}