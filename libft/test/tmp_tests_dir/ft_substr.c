/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:08:28 by sookang           #+#    #+#             */
/*   Updated: 2021/05/10 20:47:35 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*sub;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	if (!s)
		return (NULL);
	if (!(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start > ft_strlen(s) || start >= (unsigned int)len)
	{
		sub[i] = 0;
		return (sub);
	}
	str += start;
	while (i < len && str[i])
	{
		sub[i] = str[i];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}
