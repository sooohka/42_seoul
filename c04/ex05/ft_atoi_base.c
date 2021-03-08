/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:13:30 by sookang           #+#    #+#             */
/*   Updated: 2021/03/02 16:29:00 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i
}

int check(char *base)
{
	int i;
	int len;

	len = my_strlen(base);

	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == base[i + 1])
			return (0);
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
			return (0);
		i++;
	}
	return (len);
}

int ft_atoi_base(char *str, char *base)
{
	int		i;
	int		len;
	char	inted[100];

	len = check(base);
	if (!len)
		return len;
	while (str[i])
	{

	}
	return;
}

#include <stdio.h>
int main(void)
{
	char *str = "123asds13\nhello";
	char *base = "01";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}
