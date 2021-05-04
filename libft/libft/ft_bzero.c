/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:59:02 by sookang           #+#    #+#             */
/*   Updated: 2021/05/04 16:00:31 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *s, unsigned int len)
{
	unsigned char	*dest;
	unsigned int	i;

	i = 0;
	dest = s;
	while (i++ < len)
		*dest++ = 0;
	return (dest);
}
