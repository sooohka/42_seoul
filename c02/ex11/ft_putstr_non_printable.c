/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:41:18 by sookang           #+#    #+#             */
/*   Updated: 2021/03/08 02:11:28 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_printable(char c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[str[i] / 16]);
			ft_putchar(hex[str[i] % 16]);
		}
		i++;
	}
}
