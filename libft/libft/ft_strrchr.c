/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:28:26 by sookang           #+#    #+#             */
/*   Updated: 2021/05/05 19:19:48 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
char *ft_strrchr(const char *s, int c)
{
	unsigned char *str;
	unsigned char  ch;
	unsigned int   len;

	str = (unsigned char *) s;
	len = ft_strlen(s);
	str += len - 1;
	ch = c;
	if (ch == '\0')
		return (str + 1);
	while (len > 0)
	{
		if (*str == ch)
			return (str);
		str--;
		len--;
	}
	return (0);
}