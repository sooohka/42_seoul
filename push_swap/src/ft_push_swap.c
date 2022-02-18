/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:27:58 by sookang           #+#    #+#             */
/*   Updated: 2022/02/19 14:17:07 by sooho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

void testStack(t_stack *a_stack, t_stack *b_stack)
{
	ft_pb(a_stack, b_stack);
	/** ft_pb(a_stack, b_stack); */
	/** ft_pb(a_stack, b_stack); */
	/** ft_pb(a_stack, b_stack); */
	/**  */
	ft_putendl_fd("A_STACK", 1);
	ft_print_stack(a_stack, 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("B_STACK", 1);
	ft_print_stack(b_stack, 1);
	ft_putendl_fd("", 1);
	/**  */
	/** ft_rr(a_stack, b_stack); */
	/** ft_rr(a_stack, b_stack); */
	/** ft_rrr(a_stack, b_stack); */
	/** ft_rrr(a_stack, b_stack); */
	/**  */
	/** ft_putendl_fd("A_STACK", 1); */
	/** ft_print_stack(a_stack, 1); */
	/** ft_putendl_fd("", 1); */
	/** ft_putendl_fd("B_STACK", 1); */
	/** ft_print_stack(b_stack, 1); */
	/** ft_putendl_fd("", 1); */
}

int main(int argc, char **argv)
{
	char   **args;
	t_stack *a_stack;
	t_stack *b_stack;

	if (argc == 1)
		return (0);

	args = ft_parse_args(argc, ++argv);
	if (!args)
	{
		ft_error();
		return (0);
	}
	else
	{
		a_stack = ft_init_stack(args);
		if (a_stack == NULL)
		{
			ft_error();
			return (0);
		}
		b_stack = ft_init_stack(NULL);
		testStack(a_stack, b_stack);
		/** ft_play(a_stack, b_stack); */
	}

	/** ft_play(a_stack, b_stack); */
}
