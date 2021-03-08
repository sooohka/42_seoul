/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:08:32 by sookang           #+#    #+#             */
/*   Updated: 2021/03/02 17:12:17 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return nb * ft_recursive_power(nb, power - 1);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_recursive_power(0, 5));
	printf("%d\n", ft_recursive_power(2, -3));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(2, 1));
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(2, 3));
}
