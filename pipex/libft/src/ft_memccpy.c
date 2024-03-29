/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:27:42 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:41:35 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src
, int c, unsigned int n)
{
	unsigned char	*dest;
	unsigned char	*s;
	unsigned char	ch;
	unsigned int	i;

	dest = dst;
	s = (unsigned char *)src;
	i = 0;
	ch = (unsigned char)c;
	while (i++ < n)
	{
		*dest = *s;
		if (*dest == ch)
			return (++dest);
		dest++;
		s++;
	}
	return (0);
}
