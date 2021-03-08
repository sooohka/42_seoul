/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <lazarus4322@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 20:40:01 by yongmkim          #+#    #+#             */
/*   Updated: 2021/02/21 15:01:58 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_draw(int a, int b, int row, int col)
{
	if (!(row || col) || (!col && row == b - 1))
	{
		ft_putchar('A');
	}
	else if ((!row && col == a - 1) || (col == a - 1 && row == b - 1))
	{
		ft_putchar('C');
	}
	else if (col == 0 || row == 0 || row == b - 1 || col == a - 1)
	{
		ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush(int a, int b)
{
	int	row;
	int	col;

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
