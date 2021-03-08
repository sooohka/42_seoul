/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:42:27 by sookang           #+#    #+#             */
/*   Updated: 2021/03/05 12:49:30 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return ft_find_next_prime(nb + 1);
		}
		i++;
	}
	return (nb);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(12));
	printf("%d\n", ft_find_next_prime(14));

}
