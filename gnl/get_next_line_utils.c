/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:28:39 by sookang           #+#    #+#             */
/*   Updated: 2021/07/24 20:15:54 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int			ft_strlen(const char *s)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = (unsigned char *)s;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}

char					*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char					*ft_strjoin(char *s1, char const *s2)
{
	char *str;
	char *c1;
	char *c2;
	char *ans;

	c1 = (char *)s1;
	c2 = (char *)s2;
	if (!s1 && !s2)
		return (NULL);
	if (!(str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	ans = str;
	while (*c1)
		*str++ = *c1++;
	while (*c2)
		*str++ = *c2++;
	free(s1);
	*str = 0;
	return (ans);
}
