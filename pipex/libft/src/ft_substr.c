/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:08:28 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:57:41 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rt(char *sub, int i)
{
	sub[i] = 0;
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*sub;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_rt(sub, i));
	str += start;
	while (i < len && str[i])
	{
		sub[i] = str[i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
