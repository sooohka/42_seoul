/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:24:41 by sookang           #+#    #+#             */
/*   Updated: 2021/02/28 21:39:57 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		dest_len;
	int		i;

	i = 0;
	dest_len = my_strlen(dest);
	while (i++ < nb)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
