/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:59:10 by sookang           #+#    #+#             */
/*   Updated: 2021/02/22 17:34:40 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 1;
	temp = 0;
	while (i < size)
	{
		if (tab[i - 1] > tab[i])
		{
			temp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		i++;
	}
}
