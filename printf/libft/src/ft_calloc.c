/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:21:39 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:39:53 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*container;
	unsigned char	*loc;
	unsigned long	i;

	i = 0;
	container = malloc(count * size);
	if (!container)
		return (NULL);
	loc = container;
	while (i < count * size)
	{
		*loc++ = 0;
		i++;
	}
	return (container);
}
