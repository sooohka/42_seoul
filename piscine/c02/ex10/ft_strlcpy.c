/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 20:56:26 by sookang           #+#    #+#             */
/*   Updated: 2021/03/09 18:58:46 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				my_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = my_strlen(src);
	if (!size)
		return (len);
	if (!dest)
		return (0);
	while ((i < size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (len);
}
