/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:38:39 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:49:10 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c_format(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_s_format(char *str)
{
	char	*cp_str;
	int		length;

	length = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	cp_str = ft_strdup(str);
	length += ft_strlen(cp_str);
	ft_putstr_fd(cp_str, 1);
	free(cp_str);
	return (length);
}

int	ft_print_percent_format(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
