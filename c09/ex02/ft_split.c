/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:22:17 by sookang           #+#    #+#             */
/*   Updated: 2021/03/17 02:11:49 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		get_strs_length(char *str, char *charset)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (is_charset(str[i], charset))
		i++;
	while (str[i])
	{
		if (is_charset(str[i], charset) && !is_charset(str[i + 1], charset) \
		&& str[i + 1])
		{
			count++;
		}
		i++;
	}
	return (count + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	int		count;

	i = -1;
	count = get_strs_length(str, charset);
	if (!(strs = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	while (++i < count)
	{
		while (is_charset(*str, charset))
			str++;
		j = 0;
		while (!is_charset(str[j], charset))
			j++;
		strs[i] = (char *)malloc(sizeof(char) * (j + 1));
		j = 0;
		while (!is_charset(*str, charset))
			strs[i][j++] = *(str++);
		strs[i][j] = 0;
	}
	strs[i] = 0;
	return (strs);
}
