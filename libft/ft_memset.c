/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:29:02 by sookang           #+#    #+#             */
/*   Updated: 2021/05/10 16:44:29 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	src;
	unsigned char	*dest;
	unsigned int	i;

	i = 0;
	dest = b;
	src = c;
	while (i++ < len)
		*dest++ = src;
	return (b);
}
