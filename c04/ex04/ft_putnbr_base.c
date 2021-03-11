/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:27:36 by sookang           #+#    #+#             */
/*   Updated: 2021/03/11 15:30:03 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check(char *base)
{
	int len;
	int i;

	i = 0;
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	str[100];
	int		len;
	int		neg;

	i = 0;
	neg = 0;
	len = check(base);
	if (nbr < 0)
	{
		nbr *= -1;
		neg = 1;
	}
	while (nbr > 0 && len)
	{
		str[i++] = base[nbr % len];
		nbr /= len;
	}
	if (neg)
		write(1, "-", 1);
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
}
