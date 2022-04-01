/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:55:11 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:06:06 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstnbr(t_stack **stack, int idx)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp != NULL)
	{
		if (i == idx)
			return (tmp->num);
		i++;
		tmp = tmp->next;
	}
	return (1);
}

void	ft_lstswp(t_stack *x, t_stack *y)
{
	int	tmp;

	tmp = x->num;
	x->num = y->num;
	y->num = tmp;
}

t_stack	*ft_lstsort(t_stack *stack)
{
	t_stack	*base;
	t_stack	*tmp;
	t_stack	*cmp;

	base = NULL;
	base = stack;
	tmp = NULL;
	cmp = NULL;
	while (base->next)
	{
		cmp = base;
		tmp = base->next;
		while (tmp)
		{
			if (cmp->num > tmp->num)
				cmp = tmp;
			tmp = tmp->next;
		}
		ft_lstswp(base, cmp);
		base = base->next;
	}
	return (stack);
}
