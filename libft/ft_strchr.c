/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:22:51 by sookang           #+#    #+#             */
/*   Updated: 2021/05/11 11:33:51 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*str;

	str = (char *)s;
	ch = (char)c;
	while (1)
	{
		if (*str == ch)
		{
			return (str);
		}
		if (!*str)
			return (0);
		str++;
	}
	return (0);
}
