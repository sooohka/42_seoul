/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:01:22 by sookang           #+#    #+#             */
/*   Updated: 2021/03/16 12:29:39 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i], 1);
}

void print_copy(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i], 1);
}

void print_size(int size)
{
	char c;
	if (size < 1)
		return;
	c = size % 10;
	print_size(size / 10);
	write(1, &c, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].copy)
	{
		print_str(par[i].str);
		print_copy(par[i].copy);
		print_size(par[i].size);
		i++;
	}
}

#include <stdlib.h>

int main(void)
{
	struct s_stock_str *test;
	char strs[2][10]={"hello", "world"};
	strs=malloc(5);
	test = ft_strs_to_tab(1, "hello");
	ft_show_tab(test);
}
