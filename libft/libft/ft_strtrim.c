/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:45:18 by sookang           #+#    #+#             */
/*   Updated: 2021/05/17 17:08:59 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		front(char *s1, char *set)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
		{
			i++;
			break ;
		}
		i++;
	}
	i--;
	return (i);
}

int		rear(char *s2, char *set)
{
	int		i;
	int		len;

	if ((len = (int)ft_strlen(s2)) == 0)
		return (0);
	i = len - 1;
	while (i >= 0)
	{
		if (!ft_strchr(set, s2[i]))
		{
			i--;
			break ;
		}
		i--;
	}
	i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*c1;
	int		i;
	int		first;
	int		last;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	c1 = (char *)s1;
	if (ft_strlen(c1) == 0)
		return (c1);
	first = front(c1, (char *)set);
	last = rear(c1, (char *)set);
	if (first >= last)
		return (ft_strdup(""));
	if (!(str = (char *)malloc((last - first + 1 + 1) * sizeof(char))))
		return (NULL);
	while (ft_strchr(set, *c1))
		c1++;
	while (i < last - first + 1)
		str[i++] = *c1++;
	str[i] = 0;
	return (str);
}
