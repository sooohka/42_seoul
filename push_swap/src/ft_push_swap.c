/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:27:58 by sookang           #+#    #+#             */
/*   Updated: 2022/02/18 20:18:39 by sooho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

int ft_isnumber(char *str)
{
	int i = 0;

	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (-1);
		i++;
	}
	return (1);
}

char *ft_cutzero(char *str)
{
	int i = 0;

	while (str[i] == '0')
	{
		if (i == (int) (ft_strlen(str) - 1))
			break;
		i++;
	}
	return str + i;
}

char **ft_parse_args(int argc, char **argv)
{
	char    **args;
	char    **args_start;
	int       len;
	long long temp_number;

	args = (char **) malloc(argc * sizeof(char *));
	args_start = args;
	while (*argv)
	{
		*argv = ft_cutzero(*argv);
		len = ft_strlen(*argv);
		if (len > 11)
		{
			ft_free(args_start);
			return (NULL);
		}
		else if (len == 11 && ft_strncmp(*argv, "-", 1) != 0 && ft_strncmp(*argv, "+", 1) != 0)
		{
			ft_free(args_start);
			return (NULL);
		}
		else if (ft_isnumber(*argv) == -1)
		{
			ft_free(args_start);
			return (NULL);
		}
		temp_number = ft_atol(*argv);
		if (temp_number > INT32_MAX || temp_number < INT32_MIN)
		{
			ft_free(args_start);
			return (NULL);
		}
		*args++ = ft_strdup(*argv++);
	}
	return args_start;
}

void testStack(char **args)
{
	t_stack *stack = ft_init_stack(args);
	t_stack *b = ft_init_stack(NULL);

	ft_pb(stack, b);
	ft_pb(stack, b);

	ft_print_stack(stack, 1);
	ft_putendl_fd("", 1);
	ft_print_stack(b, 1);
	ft_putendl_fd("", 1);

	ft_pa(stack, b);
	ft_pa(stack, b);

	ft_print_stack(stack, 1);
	ft_putendl_fd("", 1);
	ft_print_stack(b, 1);
	ft_putendl_fd("", 1);
}

int main(int argc, char **argv)
{
	char   **args;
	t_stack *stack;

	if (argc == 1)
		return (0);

	args = ft_parse_args(argc, ++argv);
	if (!args)
		ft_error();

	testStack(args);
	stack = ft_init_stack(args);
	/** ft_free(args); */
	/** if (stack == NULL) */
	/** { */
	/**     ft_free_stack(stack); */
	/**     ft_error(); */
	/**     return (0); */
	/** } */
	/** ft_free_stack(stack); */

	/** while (*args) */
	/** { */
	/**     ft_putstr_fd(*args, 1); */
	/**     ft_putstr_fd("\n", 1); */
	/**     args++; */
	/** } */
	/**  */
}
