/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:56:54 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:06:06 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*rr_swap(t_stack *top, t_stack *tmp)
{
	while (top->next)
		top = top->next;
	tmp->num = top->num;
	tmp->next = NULL;
	tmp->prev = NULL;
	return (tmp);
}

void	rr_bottom(t_stack **top)
{
	while ((*top))
	{
		if ((*top)->next->next == NULL)
			break ;
		*top = (*top)->next;
	}
	free((*top)->next);
	(*top)->next = NULL;
}

void	rr_stack(t_stack **top, t_stack *tmp)
{
	t_stack	*a;

	a = NULL;
	tmp = NULL;
	if (*top)
	{
		tmp = (t_stack *)malloc(sizeof(t_stack));
		if (tmp == NULL)
			return ;
		tmp = rr_swap(*top, tmp);
		a = *top;
		rr_bottom(top);
		*top = a;
		add_front(top, tmp);
	}
}

void	r_stack(t_stack **top)
{
	if (*top)
	{
		*top = (*top)->next;
		add_back_r(top);
	}
}
