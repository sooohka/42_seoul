/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:23:32 by sookang           #+#    #+#             */
/*   Updated: 2021/05/10 17:17:29 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int		is_number(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\n')
		return (1);
	else if (c == '\t' || c == '\v' || c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int num;
	int neg_flag;

	i = 0;
	neg_flag = 1;
	num = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg_flag *= -1;
	while (str[i] && is_number(str[i]))
	{
		if (is_space(str[i]))
			return (0);
		if (!is_number(str[i]))
			return (0);
		num *= 10;
		num += (str[i] - 48);
		i++;
	}
	return (neg_flag * num);
}
