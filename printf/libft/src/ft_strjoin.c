/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:48:09 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:46:13 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*c1;
	char	*c2;
	char	*ans;

	c1 = (char *)s1;
	c2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ans = str;
	while (*c1)
		*str++ = *c1++;
	while (*c2)
		*str++ = *c2++;
	*str = 0;
	return (ans);
}
