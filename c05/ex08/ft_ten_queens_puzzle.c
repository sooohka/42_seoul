/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:50:41 by sookang           #+#    #+#             */
/*   Updated: 2021/03/11 16:05:35 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 10

void	visualizer(int arr[SIZE])
{
	int		i;
	char	c;

	i = -1;
	while (++i < SIZE)
	{
		c = arr[i] + 48;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int		check(int arr[SIZE], int i)
{
	int k;

	k = -1;
	while (++k < i)
	{
		if (arr[i] == arr[k])
			return (0);
		if (arr[i] - arr[k] == i - k || arr[k] - arr[i] == i - k)
			return (0);
	}
	return (1);
}

void	get_queen(int arr[SIZE], int i, int *cnt)
{
	int j;

	j = -1;
	if (check(arr, i))
	{
		if (i == SIZE - 1)
		{
			(*cnt)++;
			visualizer(arr);
		}
		else
		{
			while (++j < SIZE)
			{
				arr[i + 1] = j;
				get_queen(arr, i + 1, cnt);
			}
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int arr[SIZE];
	int count;
	int	i;

	i = -1;
	while (++i < SIZE)
		arr[i] = 0;
	count = 0;
	initializer(arr);
	get_queen(arr, -1, &count);
	return (count);
}
