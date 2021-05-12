#include <stdio.h>
#include <unistd.h>
void ft_putstr_non_printable(char *str);
int  main(void)
{
	char text1[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(text1);
	printf("\n");
	char text2[] = "\x01\x02oucou\n\xfe\xff";
	ft_putstr_non_printable(text2);
	putchar(0x0a);
	return 0;
}
