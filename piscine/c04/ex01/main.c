
#include <stdio.h>
extern void ft_putstr(char *str);
int         main()
{
	ft_putstr("");
	printf("\n");
	ft_putstr("\0");
	printf("\n");
	ft_putstr("hello");
	printf("\n");
	ft_putstr("bye");
}
