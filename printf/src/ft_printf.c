/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:54:05 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 15:23:32 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// • %p The void * pointer argument is printed in hexadecimal.
// • %x print a number in hexadecimal (base 16), with lowercase.
// • %X print a number in hexadecimal (base 16), with uppercase.

int ft_parse(char type, va_list *ap)
{
	int   length;
	char *cp_str;

	length = 0;
	if (type == 'c')
		length += ft_print_c_format(va_arg(*ap, int));
	else if (type == 's')
		length += ft_print_s_format(va_arg(*ap, char *));
	else if (type == '%')
		length += ft_print_percent_format();
	else if (type == 'd')
		length += ft_print_d_format(va_arg(*ap, int));
	else if (type == 'i')
		length += ft_print_d_format(va_arg(*ap, int));
	else if (type =='u')
		length += ft_print_u_format(va_arg(*ap, int));
	return (length);
}

int ft_printf(const char *str, ...)
{
	va_list ap;
	int     length;

	length = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str != '%')
		{
			length += 1;
			ft_putchar_fd(*str, 1);
		}
		else
		{
			str += 1;
			length += ft_parse(*str, &ap);
		}
		str += 1;
	}
	return (length);
}
