/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:27:56 by sookang           #+#    #+#             */
/*   Updated: 2021/03/11 18:55:16 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i] && s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void sort(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap(&argv[i + 1], &argv[i]);
			i = 0;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
