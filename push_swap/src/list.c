/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:52:41 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:06:06 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_list(t_var *v, char **split, t_stack *tmp)
{
	int	i;

	i = -1;
	while (split[++i])
	{
		tmp = malloc(sizeof(t_stack));
		if (tmp == NULL)
			return (NULL);
		tmp->num = ft_atol(split[i]);
		if (tmp->num > 2147483647 || tmp->num < -2147483648)
			ft_exit_ps("Error\n", 1);
		tmp->next = NULL;
		tmp->prev = NULL;
		add_back(&v->a, tmp);
		tmp = NULL;
	}
	return (v->a);
}

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i += 1;
	}
	free(array);
}
