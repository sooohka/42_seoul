/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:53:32 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:06:06 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_stack(t_stack **a, t_stack **b, t_stack *tmp)
{
	tmp = NULL;
	if (*b == NULL && *a)
	{
		*b = (t_stack *)malloc(sizeof(t_stack));
		(*b)->prev = NULL;
		(*b)->num = (*a)->num;
		(*b)->next = NULL;
		(*a) = (*a)->next;
		(*a)->prev = NULL;
	}
	else
	{
		if (*a)
		{
			tmp = (t_stack *)malloc(sizeof(t_stack));
			tmp->num = (*a)->num;
			tmp->next = NULL;
			tmp->prev = NULL;
			add_front(b, tmp);
			(*a) = (*a)->next;
		}
	}
}
