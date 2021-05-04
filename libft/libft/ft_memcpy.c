/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:01:56 by sookang           #+#    #+#             */
/*   Updated: 2021/05/04 17:35:36 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, unsigned int n)
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
