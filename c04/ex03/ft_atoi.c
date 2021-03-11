/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:06:09 by sookang           #+#    #+#             */
/*   Updated: 2021/03/11 20:25:15 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_negative(char c)
{
	return (c == '-' ? 1 : 0);
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
	int num_flag;

	i = 0;
	neg_flag = 1;
	num = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] && (num_flag || is_number(str[i])))
	{
		if (is_space(str[i]))
			return (0);
		if (is_negative(str[i]))
			neg_flag *= -1;
		if (is_number(str[i]))
		{
			num *= 10;
			num += (str[i] - 48);
			num_flag = 0;
		}
		i++;
	}
	return (neg_flag * num);
}
