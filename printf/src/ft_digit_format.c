#include "ft_printf.h"

int ft_print_d_format(int i)
{
	int   length;
	char *str;

	str = ft_itoa(i);
	length = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (length);
}

int ft_print_u_format(unsigned int i)
{
	int   length;
	char *str;

	str = ft_unsigned_itoa(i);
	length = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (length);
}

int ft_print_x_format(unsigned int i)
{
	int   length;
	char *str;

	str = ft_xtoa(i, 'x');
	length = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (length);
}

int ft_print_X_format(unsigned int i)
{
	int   length;
	char *str;

	str = ft_xtoa(i, 'X');
	length = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (length);
}