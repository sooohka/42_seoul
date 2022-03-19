/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:45:18 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:44:56 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		first;
	int		last;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1) - 1;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (last >= 0 && ft_strchr(set, s1[last]))
		last--;
	if (first > last)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (last - first + 1 + 1));
	if (!str)
		return (NULL);
	while (first <= last)
		str[i++] = s1[first++];
	str[i] = 0;
	return (str);
}
