/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:06:09 by sookang           #+#    #+#             */
/*   Updated: 2021/03/01 17:45:09 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_negative(char c)
{
	return (c == '-' ? 1 : 0);
}

int ft_atoi(char *str)
{
	int i;
	int num;
	int neg_flag;

	i = -1;
	neg_flag = 1;
	num = 0;
	while (str[++i])
	{
		if (str[i] == '+' || str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			continue;
		if (is_negative(str[i]))
		{
			neg_flag *= -1;
			continue;
		}
		if (str[i] >= 48 && str[i] <= 57)
		{
			num *= 10;
			num += (str[i] - 48);
		}
	}
	return (neg_flag * num);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("---+-+1234ab567s444R"));
}
