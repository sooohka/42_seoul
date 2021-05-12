/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:51:32 by sookang           #+#    #+#             */
/*   Updated: 2021/05/12 18:04:06 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[10];
	int		i;
	int		is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	else if (n == 0)
		write(1, "0", fd);
	i = -1;
	while (n != 0)
	{
		if (n > 0)
			str[++i] = ((n % 10) + '0');
		else
			str[++i] = (-(n % 10) + '0');
		n /= 10;
	}
	if (is_negative)
		write(1, "-", fd);
	while (i >= 0)
		write(1, &str[i--], fd);
}
