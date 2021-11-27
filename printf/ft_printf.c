/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:54:05 by sookang           #+#    #+#             */
/*   Updated: 2021/11/27 17:36:09 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
		}
		else
		{
		}
		str++;
	}
	return (0);
}

int main(void)
{
	ft_printf("a%b%b", "2", "2");
	return (0);
}
