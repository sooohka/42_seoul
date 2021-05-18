/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:57:21 by sookang           #+#    #+#             */
/*   Updated: 2021/05/10 17:13:44 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned char	val;
	unsigned int	i;

	str = (unsigned char *)s;
	val = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == val)
			return (str);
		str++;
		i++;
	}
	return (0);
}
