/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:54:49 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:53:16 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_idx(t_stack *stack, int num, int flag)
{
	int	i;

	i = 1;
	if (flag == 1)
	{
		while (stack)
		{
			if (stack->num <= num)
				return (i);
			stack = stack->next;
			i++;
		}
	}
	if (flag == 2)
	{
		while (stack)
		{
			if (stack->num >= num)
				return (i);
			stack = stack->next;
			i++;
		}
	}
	return (-1);
}

int	get_pivot(t_stack *stack)
{
	t_stack	*tmp;
	int		len;
	int		pvt;

	pvt = 0;
	len = 0;
	tmp = NULL;
	len = list_size(stack);
	tmp = ft_lstsort(stack);
	if (len <= 10)
		pvt = ft_abs(len / 2);
	else if (len > 10 && len < 200)
		pvt = ft_abs(len / 4);
	else if (len >= 200)
		pvt = ft_abs(len / 8);
	return (ft_lstnbr(&tmp, pvt));
}

int	get_max(t_stack *stack)
{
	int		max;
	t_stack	*tmp;

	max = 0;
	tmp = NULL;
	if (stack)
	{
		max = stack->num;
		tmp = stack;
		while (stack)
		{
			if (stack->num >= max)
				max = stack->num;
			stack = stack->next;
		}
		stack = tmp;
	}
	return (max);
}

int	get_min(t_stack *stack)
{
	int	min;

	min = stack->num;
	while (stack)
	{
		if (stack->num < min)
			min = stack->num;
		stack = stack->next;
	}
	return (min);
}
