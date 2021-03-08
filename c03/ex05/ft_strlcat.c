/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 20:09:36 by sookang           #+#    #+#             */
/*   Updated: 2021/02/28 21:41:50 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		len;
	int		i;

	i = 0;
	len = my_strlen(dest);
	while (src[i] && i < size - len - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	if (size < len)
	{
		return (my_strlen(src) + size);
	}
	return (my_strlen(src) + len);
}
