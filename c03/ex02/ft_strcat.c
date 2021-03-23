/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:17:11 by sookang           #+#    #+#             */
/*   Updated: 2021/03/09 23:09:47 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_strlen(char *dest)
{
	int		i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len;

	i = 0;
	len = my_strlen(dest);
	while (src[i] != '\0')
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
