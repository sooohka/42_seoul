/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:22:51 by sookang           #+#    #+#             */
/*   Updated: 2021/05/10 18:16:21 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			ch;
	char			*str;
	unsigned int	i;
	unsigned int	len;

	str = (char*)s;
	ch = c;
	i = 0;
	len = ft_strlen(s);
	while (i < len + 1)
	{
		if (*str == ch)
			return (str);
		str++;
		i++;
	}
	return (0);
}
