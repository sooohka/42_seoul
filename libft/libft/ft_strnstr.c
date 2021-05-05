/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:20:38 by sookang           #+#    #+#             */
/*   Updated: 2021/05/05 20:02:28 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned char *src;
	unsigned char *find;
	unsigned int   i;
	unsigned int   j;
	
	src = haystack;
	find = needle;
	i = 0;
	j = 0;
	if (*src == 0)
		return (0);
	if (*find == 0)
		return (haystack);
	while (j < len)
	{
		i = 0;
		while ((src[i] == find[i] && i + j < len) || find[i] == 0)
		{
			if (find[i] == 0)
				return (src);
			i++;
		}
		j++;
		src++;
	}
	return (0);
}