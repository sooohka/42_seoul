/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:28:34 by sookang           #+#    #+#             */
/*   Updated: 2021/05/19 12:23:18 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_strs_length(char *str, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i] == c && str[i])
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == c && !(str[i + 1] == c) && str[i + 1])
			count++;
		i++;
	}
	return (count + 1);
}

static void		assign_str(char **strs, char *str, char c, int total_len)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < total_len)
	{
		while (*str == c && *str)
			str++;
		j = 0;
		while (!(str[j] == c) && str[j])
			j++;
		if (!(strs[i] = (char *)malloc(sizeof(char) * (j + 1))))
			return (NULL);
		k = 0;
		while (k < j)
			strs[i][k++] = *(str++);
		strs[i][k] = 0;
		i++;
	}
	strs[i] = 0;
}

char			**ft_split(char const *s, char c)
{
	int			total_len;
	char		*str;
	char		**strs;

	if (!s)
		return (NULL);
	str = (char*)s;
	total_len = get_strs_length(str, c);
	if (!(strs = (char **)malloc(sizeof(char *) * (total_len + 1))))
		return (NULL);
	assign_str(strs, str, c, total_len);
	return (strs);
}
