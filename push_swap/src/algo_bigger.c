/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_bigger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:50:41 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 15:52:28 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
void	first_sort(t_stk **a, t_stk **b, int len, t_var *v)
{
	int		i;
	int		pvt;
	t_stk	*tmp1;
	t_stk	*tmp2;

	i = len;
	while (i >= ft_abs(len / 4))
	{
		tmp1 = ft_lst_dup(*a);
		pvt = get_pivot(tmp1);
		while (check_pivot((*a), pvt, 1) && (*a))
		{
			if ((*a)->num <= pvt)
			{
				tmp2 = *a;
				pick_case(a, b, PB, v);
				i--;
				free(tmp2);
			}
			else
				normalize_a(a, b, v, pvt);
		}
		free_stk(&tmp1);
	}
}

void	second_sort(t_stk **a, t_stk **b, int len, t_var *v)
{
	int		min;
	t_stk	*tmp;

	tmp = NULL;
	while (*a && !check_sort(a, len))
	{
		min = get_min(*a);
		tmp = (*a)->nxt;
		while ((*a)->num != min && tmp && tmp->num == min)
			pick_case(a, b, SA, v);
		while (list_size(*a) && check_pivot((*a), min, 1))
		{
			if ((*a)->num == min)
			{
				tmp = *a;
				pick_case(a, b, PB, v);
				free(tmp);
				len--;
			}
			else
				normalize_a(a, b, v, min);
		}
	}
}

void	third_sort(t_stk **a, t_stk **b, int max, t_var *v)
{
	t_stk	*tmp;

	tmp = NULL;
	while (*b)
	{
		max = get_max(*b);
		while (check_pivot((*b), max, 2))
		{
			max = get_max(*b);
			tmp = (*b)->nxt;
			while ((*b)->num != max && tmp && tmp->num == max)
				pick_case(a, b, SB, v);
			while (((*b)->num != max) && *b)
				normalize_b(a, b, v, max);
			while (*b && (*b)->num == max)
			{
				tmp = *b;
				pick_case(a, b, PA, v);
				max = get_max(*b);
				free(tmp);
			}
		}
	}
}

void	sort_bigger(t_stk **a, t_stk **b, int len, t_var *v)
{
	int	max;

	max = 0;
	first_sort(a, b, len, v);
	second_sort(a, b, len, v);
	third_sort(a, b, max, v);
	free_stk(a);
	free_stk(b);
}
