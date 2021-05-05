/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:15:23 by sookang           #+#    #+#             */
/*   Updated: 2021/05/05 17:19:41 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(const char *s, unsigned int maxlen)
{
	unsigned char *str;
	unsigned int   i;

	i = 0;
	str =(unsigned char*) s;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}