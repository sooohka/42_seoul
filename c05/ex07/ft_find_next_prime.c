/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:42:27 by sookang           #+#    #+#             */
/*   Updated: 2021/03/11 16:01:08 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}
	return (nb);
}
