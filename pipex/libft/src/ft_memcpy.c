/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:01:56 by sookang           #+#    #+#             */
/*   Updated: 2021/05/17 17:22:24 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned char	*dest;
	unsigned char	*s;
	unsigned int	i;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	s = (unsigned char *)src;
	dest = dst;
	while (i++ < n)
		*dest++ = *s++;
	return (dst);
}
