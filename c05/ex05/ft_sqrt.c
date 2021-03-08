/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:23:09 by sookang           #+#    #+#             */
/*   Updated: 2021/03/02 17:34:26 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 1)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(-9));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(27));
	printf("%d\n", ft_sqrt(81));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(125));
}
