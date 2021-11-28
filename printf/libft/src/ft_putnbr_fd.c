/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:51:32 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:42:08 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec(int n, int fd)
{
	char	c;

	if (n != 0)
	{
		rec(n / 10, fd);
		c = n % 10 + 48;
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT32_MIN)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else if (n < 1)
	{
		write(fd, "-", 1);
		n *= -1;
		rec(n, fd);
	}
	else
		rec(n, fd);
}
