/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:28:25 by sookang           #+#    #+#             */
/*   Updated: 2021/03/01 17:03:45 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
	char str[10];
	int  i;
	int  is_negative;

	is_negative = 0;
	if (nb < 0)
		is_negative = 1;
	else if (nb == 0)
		write(1, "0", 1);
	i = -1;
	while (nb != 0)
	{
		if (nb > 0)
			str[++i] = ((nb % 10) + '0');
		else
			str[++i] = (-(nb % 10) + '0');
		nb /= 10;
	}
	if (is_negative)
		write(1, "-", 1);
	while (i >= 0)
		write(1, &str[i--], 1);
}
int main()
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(28);
	printf("\n");
	ft_putnbr(-483648);
	printf("\n");
	ft_putnbr(0);
}
