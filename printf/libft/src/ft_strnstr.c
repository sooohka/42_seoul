/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:20:38 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:44:21 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	char			*src;
	char			*find;
	unsigned int	i;
	unsigned int	j;

	src = (char *)haystack;
	find = (char *)needle;
	i = 0;
	j = 0;
	if (*src == 0 && *find == 0)
		return (src);
	if (*src == 0)
		return (NULL);
	if (*find == 0)
		return (src);
	while (j < len && *src)
	{
		i = 0;
		while ((src[i] == find[i] && i + j < len) || find[i] == 0)
			if (find[i++] == 0)
				return (src);
		j++;
		src++;
	}
	return (0);
}
