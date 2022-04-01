/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_u2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:53:10 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:06:06 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lst_dup(t_stack *stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = malloc(sizeof(t_stack));
	ft_bzero(tmp1, sizeof(t_stack));
	tmp2 = tmp1;
	while (stack)
	{
		tmp1->num = stack->num;
		if (stack->next)
		{
			tmp1->next = malloc(sizeof(t_stack));
			ft_bzero(tmp1->next, sizeof(t_stack));
			tmp1 = tmp1->next;
		}
		stack = stack->next;
	}
	tmp1 = tmp2;
	return (tmp1);
}

t_stack	*ft_lst_bottom(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while ((tmp)->next)
		(tmp) = (tmp)->next;
	return (tmp);
}
