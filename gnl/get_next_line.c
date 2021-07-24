/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:17:54 by sookang           #+#    #+#             */
/*   Updated: 2021/07/24 21:18:49 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			check_line(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char		*ft_cutter(char *src, int len)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i <= len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char*			returner(char **cache)
{
	int		len;
	char	*temp;
	char *ans;

	if ((len = check_line(*cache)) >= 0)
	{
		ans = ft_cutter(*cache, len);
		temp = ft_strdup(*cache + len + 1);
		free(*cache);
		*cache = temp;
		return (ans);
	}
	else if (*cache)
	{
		ans = *cache;
		*cache = 0;
		return (ans);
	}
	return (NULL);
}

char*			get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*cache;
	int			len;
	int			readed;
	char		*temp;
	char *ans;
	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	while ((readed = read(fd, buffer, BUFFER_SIZE)))
	{
		if (readed == -1)
			return (NULL);
		buffer[readed] = 0;
		cache = !cache ? ft_strdup(buffer) : ft_strjoin(cache, buffer);
		if ((len = check_line(cache)) >= 0)
		{
			ans = ft_cutter(cache, len);
			temp = ft_strdup(&cache[len + 1]);
			free(cache);
			cache = temp;
			return (ans);
		}
	}
	return (returner(&cache));
}
