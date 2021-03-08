/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:51:38 by sookang           #+#    #+#             */
/*   Updated: 2021/03/02 17:03:11 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_recursive_factorial(int nb)
{
	if (nb<1)
		return (0);
	if(nb==1)
		return (1);
	return nb * ft_recursive_factorial(nb - 1);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(4));
}
