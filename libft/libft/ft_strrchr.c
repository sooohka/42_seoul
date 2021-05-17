/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:28:26 by sookang           #+#    #+#             */
/*   Updated: 2021/05/17 18:29:57 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	char			ch;
	unsigned int	len;

	str = (char *)s;
	len = ft_strlen(s);
	if (len == 0)
	{
		if (c == 0)
			return (str);
		return (NULL);
	}
	str += len - 1;
	ch = c;
	if (ch == '\0')
		return (str + 1);
	while (len-- > 0)
	{
		if (*str-- == ch)
			return (++str);
	}
	return (0);
}
