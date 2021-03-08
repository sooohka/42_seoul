/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 11:49:56 by yonlee            #+#    #+#             */
/*   Updated: 2021/02/21 15:00:00 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_draw(int a, int b, int row, int col)
{
	if (!(row || col) || (col == a - 1 && row == b - 1 && col != 0 && row != 0))
		ft_putchar('/');
	else if ((row == 0 && col == a - 1) || (row == b - 1 && col == 0))
		ft_putchar('\\');
	else if (col == 0 || col == a - 1 || row == 0 || row == b - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int a, int b)
{
	int row;
	int col;

	row = 0;
	while (row < b)
	{
		col = 0;
		while (col < a)
		{
			rush_draw(a, b, row, col);
			col++;
		}
		if (a != 0)
			ft_putchar('\n');
		row++;
	}
}
