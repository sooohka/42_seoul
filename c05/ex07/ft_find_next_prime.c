/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:42:27 by sookang           #+#    #+#             */
/*   Updated: 2021/03/15 01:45:32 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	unsigned int i;
	unsigned int n;

	i = 2;
	if (nb < 2)
		return (2);
	n = (unsigned int)nb;
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (ft_find_next_prime(n + 1));
		}
		i++;
	}
	return ((int)n);
}
