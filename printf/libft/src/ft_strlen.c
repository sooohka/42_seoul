/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:15:23 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:43:49 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen(const char *s)
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
