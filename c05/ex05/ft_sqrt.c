/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:23:09 by sookang           #+#    #+#             */
/*   Updated: 2021/03/15 00:42:28 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int i;
	unsigned int n;

	n = (unsigned int)nb;
	i = 0;
	if (nb < 1)
		return (0);
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (0);
}
