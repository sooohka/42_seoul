/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:03:23 by sookang           #+#    #+#             */
/*   Updated: 2021/05/12 17:20:29 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = (int)ft_strlen(s);
	if (!(str = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	while (s[j])
	{
		str[j] = f(j, s[j]);
		j++;
	}
	str[j] = 0;
	return (str);
}
