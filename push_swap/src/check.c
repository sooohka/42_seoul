/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:51:24 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:39:23 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_stack **a, int len)
{
	t_stack	*tmp;

	if (list_size(*a) != len)
		return (0);
	(void)len;
	tmp = *a;
	while (tmp && tmp->next)
	{
		if ((tmp)->next != NULL && ((tmp)->num < (tmp)->next->num))
			(tmp) = tmp->next;
		else
			return (0);
	}
	return (1);
}

void	check_dup(char **argv)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	while (argv[i])
	{
		dup = ft_strdup(argv[i]);
		j = 0;
		while (argv[j])
		{
			if (j == i)
				j++;
			else if (ft_strcmp(dup, argv[j]) == 0)
			{
				free(dup);
				ft_exit_ps("Error\n", 1);
			}
			else
				j++;
		}
		free(dup);
		i++;
	}
}

int	check_overflow(char *arg)
{
	long long	tmp;

	tmp = ft_atol(arg);
	if (tmp >= INT_MIN && tmp <= INT_MAX && ft_strlen(arg) < 12)
		return (1);
	return (0);
}

int	check_numbers(char **argv)
{
	int	i;
	int	j;

	i = -1;
	if (!argv[0])
		ft_exit_ps("Error\n", 1);
	while (argv[++i])
	{
		j = -1;
		if (check_overflow(argv[i]) == 0)
			ft_exit_ps("Error\n", 1);
		while (argv[i][++j])
		{
			if (ft_isalpha(argv[i][j]) == 1 || argv[i][j] == '.'
				|| ((argv[i][j]) == '-' && (argv[i][j + 1]) == '\0')
				|| ((argv[i][j]) == '+' && (argv[i][j + 1]) == '\0'))
				ft_exit_ps("Error\n", 1);
		}
	}
	return (1);
}

int	check_pivot(t_stack *a, int pvt, int flag)
{
	while (a)
	{
		if (flag == 1)
		{
			if (a->num <= pvt)
				return (1);
			a = a->next;
		}
		if (flag == 2)
		{
			if (a->num == pvt)
				return (1);
			a = a->next;
		}
	}
	return (0);
}
