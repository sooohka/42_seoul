/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:22:17 by sookang           #+#    #+#             */
/*   Updated: 2021/03/18 15:20:46 by sookang          ###   ########.fr       */
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
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (is_charset(str[i], charset) && !is_charset(str[i + 1],\
		charset) && str[i + 1])
		{
			count++;
		}
		i++;
	}
	return (count + 1);
}

void	assign_str(char **strs, char *str, char *charset, int total_len)
{
	int i;
	int j;

	i = -1;
	while (++i < total_len)
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
}

char	**ft_split(char *str, char *charset)
{
	char		**strs;
	int			len;
	char		*initial_str;

	initial_str = str;
	len = get_strs_length(str, charset);
	if (!(strs = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	assign_str(strs, initial_str, charset, len);
	return (strs);
}
