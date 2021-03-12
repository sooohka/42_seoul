/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:27:36 by sookang           #+#    #+#             */
/*   Updated: 2021/03/11 20:21:03 by sookang          ###   ########.fr       */
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
	int i;
	int j;

	j = 0;
	i = 0;
	if (my_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
			return (0);
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (my_strlen(base));
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	str[100];
	int		len;

	i = 0;
	len = check(base);
	if (!len)
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	while (nbr > 0)
	{
		str[i++] = base[nbr % len];
		nbr /= len;
	}
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
}
