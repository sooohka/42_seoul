/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:01:22 by sookang           #+#    #+#             */
/*   Updated: 2021/03/17 01:26:54 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_copy(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_size(int size)
{
	char c;

	if (size < 1)
		return ;
	c = size % 10 + '0';
	print_size(size / 10);
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		print_str(par[i].str);
		write(1, "\n", 1);
		if (par[i].size == 0)
		{
			write(1, "0", 1);
		}
		else
		{
			print_size(par[i].size);
		}
		write(1, "\n", 1);
		print_copy(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
