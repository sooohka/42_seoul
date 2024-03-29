/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:28:34 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:43:14 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_strs_length(char *str, char c)
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

static char	**free_strs(char **strs)
{
	int		i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	**assign_str(char **strs, char *str, char c, int total_len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < total_len)
	{
		while (*str == c && *str)
			str++;
		j = 0;
		while (!(str[j] == c) && str[j])
			j++;
		strs[i] = (char *)malloc(sizeof(char) * (j + 1));
		if (!strs[i])
			return (free_strs(strs));
		k = 0;
		while (k < j)
			strs[i][k++] = *(str++);
		strs[i][k] = 0;
		i++;
	}
	strs[i] = 0;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	int			total_len;
	char		*str;
	char		**strs;

	if (!s)
		return (NULL);
	str = (char *)s;
	total_len = get_strs_length(str, c);
	strs = (char **)malloc(sizeof(char *) * (total_len + 1));
	if (!strs)
		return (NULL);
	assign_str(strs, str, c, total_len);
	return (strs);
}
