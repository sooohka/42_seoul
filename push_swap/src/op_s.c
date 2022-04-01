/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:58:21 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:06:07 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_stack(t_stack **top)
{
	int		i;
	int		j;
	t_stack	*tmp;

	tmp = NULL;
	if ((*top) && (*top)->next)
	{
		tmp = *top;
		i = (*top)->num;
		j = (*top)->next->num;
		tmp = *top;
		(*top)->num = j;
		tmp = *top;
		(*top)->next->num = i;
		(*top) = tmp;
	}
}
