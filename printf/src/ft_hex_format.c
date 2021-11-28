/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:10:10 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:49:57 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x_format(unsigned int i)
{
	int		length;
	char	*str;

	str = ft_xtoa(i, 'x');
	length = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (length);
}

int	ft_print_X_format(unsigned int i)
{
	int		length;
	char	*str;

	str = ft_xtoa(i, 'X');
	length = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (length);
}

int	ft_print_p_format(unsigned long long l)
{
	int		length;
	char	*str;

	str = ft_tohex(l, 'x');
	length = ft_strlen(str) + 2;
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(str, 1);
	free(str);
	return (length);
}
