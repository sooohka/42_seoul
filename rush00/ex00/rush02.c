/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 11:15:45 by sookang           #+#    #+#             */
/*   Updated: 2021/02/21 15:01:39 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_draw(int a, int b, int row, int col)
{
	if (!row && (!col || col == a - 1))
	{
		ft_putchar('A');
	}
	else if (row == b - 1 && (!col || col == a - 1))
	{
		ft_putchar('C');
	}
	else if (!row || row == b - 1 || !col || col == a - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
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
