/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:38:41 by sookang           #+#    #+#             */
/*   Updated: 2021/03/15 00:17:06 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
