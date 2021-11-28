/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:10:19 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:10:19 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
