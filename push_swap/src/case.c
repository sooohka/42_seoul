/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:57:16 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:55:52 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	next_next_case(t_stack **a, t_stack **b, int c, t_var *v)
{
	t_stack	*tmp;

	tmp = NULL;
	if (c == SB && list_size(*b) > 1)
	{
		ft_putstr_fd("sb\n", v->fd);
		s_stack(b);
	}
	else if (c == SA && list_size(*a) > 1)
	{
		ft_putstr_fd("sa\n", v->fd);
		s_stack(a);
	}
}

void	next_case(t_stack **a, t_stack **b, int c, t_var *v)
{
	t_stack	*tmp;

	tmp = NULL;
	if (c == PA)
	{
		ft_putstr_fd("pa\n", v->fd);
		p_stack(b, a, tmp);
		free(tmp);
	}
	else if (c == RB && list_size(*b) > 1)
	{
		ft_putstr_fd("rb\n", v->fd);
		r_stack(b);
		free(tmp);
	}
	else if (c == RRB && list_size(*b) > 1)
	{
		ft_putstr_fd("rrb\n", v->fd);
		rr_stack(b, tmp);
		free(tmp);
	}
	else
		next_next_case(a, b, c, v);
}

void	pick_case(t_stack **a, t_stack **b, int c, t_var *v)
{
	t_stack	*tmp;

	tmp = NULL;
	if (c == PB)
	{
		ft_putstr_fd("pb\n", v->fd);
		p_stack(a, b, tmp);
		free(tmp);
	}
	else if (c == RA)
	{
		ft_putstr_fd("ra\n", v->fd);
		r_stack(a);
		free(tmp);
	}
	else if (c == RRA && list_size(*a) > 1)
	{
		ft_putstr_fd("rra\n", v->fd);
		rr_stack(a, tmp);
	}
	else
		next_case(a, b, c, v);
}
