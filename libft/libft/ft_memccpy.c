/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:27:42 by sookang           #+#    #+#             */
/*   Updated: 2021/05/04 17:43:15 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *restrict dst, const void *restrict src\
, int c, unsigned int n)
{
	unsigned char	*dest;
	unsigned char	*s;
	unsigned char	ch;
	unsigned int	i;

	dest = dst;
	s = (unsigned char*)src;
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
