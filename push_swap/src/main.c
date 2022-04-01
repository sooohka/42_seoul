/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:56:01 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:01:36 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**fill_args(t_var *v, int argc, char **argv)
{
	v->fd = 1;
	if (argc == 2)
		v->split = ft_split(argv[1], ' ');
	else
		v->split = &argv[1];
	return (v->split);
}

void	push_swap(t_var *v, int argc, char **argv)
{
	t_stk	*stk;

	stk = NULL;
	v->split = fill_args(v, argc, argv);
	check_dup(v->split);
	check_numbers(v->split);
	v->a = fill_list(v, v->split, stk);
	if (check_sort(&v->a, list_size(v->a)) == 1)
		ft_exit_ps("Error\n", 0);
	v->len = list_size(v->a);
	free_stk(&stk);
	if (v->len <= 10)
		sort_short(&(v->a), &(v->b), v->len, v);
	else
		sort_bigger(&(v->a), &(v->b), v->len, v);
	if (argc == 2 || (argc == 3 && v->fd != 1))
		ft_free_array(v->split);
	close(v->fd);
}

void	ft_exit_ps(char *arg, int err)
{
	if (err != 0)
		ft_putstr_fd(arg, 2);
	exit(err);
}

int	main(int argc, char **argv)
{
	t_var	*v;

	v = NULL;
	if (argc < 2)
		return (0);
	else
	{
		v = ft_init_var(v);
		push_swap(v, argc, argv);
		free(v);
		v = NULL;
	}
}
