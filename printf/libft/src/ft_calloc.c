/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:21:39 by sookang           #+#    #+#             */
/*   Updated: 2021/05/10 18:05:58 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*container;
	unsigned char	*loc;
	unsigned long	i;

	i = 0;
	if (!(container = malloc(count * size)))
		return (NULL);
	loc = container;
	while (i < count * size)
	{
		*loc++ = 0;
		i++;
	}
	return (container);
}
