/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:53:05 by sookang           #+#    #+#             */
/*   Updated: 2021/05/04 19:00:30 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char	*dest;
	unsigned char	*s;
	unsigned int	i;

	dest = dst;
	s = (unsigned char *) src;
	if (dst == 0 && src == 0)
		return (0);
	if (s < dest)
	{
		i = len;
		dest += len;
		s += len;
		while (i-- > 0)
			*--dest = *--s;
	}
	else
	{
		i = 0;
		while (i++ < len)
			*dest++ = *s++;
	}
	return (dst);
}
