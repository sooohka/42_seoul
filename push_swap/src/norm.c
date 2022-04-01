/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:58:10 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 15:58:11 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize_a(t_stk **a, t_stk **b, t_var *v, int pvt)
{
	int	idx;
	int	num;

	idx = get_idx((*a), pvt, 1);
	num = (list_size((*a)) / 2);
	if (idx < num)
		pick_case(a, b, RA, v);
	else
		pick_case(a, b, RRA, v);
}

void	normalize_b(t_stk **a, t_stk **b, t_var *v, int pvt)
{
	int	idx;
	int	num;

	idx = get_idx((*b), pvt, 2);
	num = ft_abs((list_size((*b)) / 2));
	if (idx < num && *b)
		pick_case(a, b, RB, v);
	else if (*b)
		pick_case(a, b, RRB, v);
}
