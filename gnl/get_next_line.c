/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:17:54 by sookang           #+#    #+#             */
/*   Updated: 2021/07/25 16:01:19 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_cutter(char *src, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*allocater(char **cache, int len)
{
	char	*ans;
	char	*temp;

	ans = ft_cutter(*cache, len + 1);
	temp = ft_strdup(*cache + len + 1);
	free(*cache);
	*cache = temp;
	return (ans);
}

char	*returner(char **cache)
{
	int		len;
	char	*ans;

	len = check_line(*cache);
	if (len >= 0)
		return (allocater(cache, len));
	else if (*cache)
	{
		ans = *cache;
		*cache = 0;
		if (ft_strlen(ans) == 0)
		{
			free(ans);
			return (NULL);
		}
		return (ans);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*cache;
	int			len;
	int			readed;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed == -1 || readed == 0)
			break ;
		buffer[readed] = 0;
		if (!cache)
			cache = ft_strdup(buffer);
		else
			cache = ft_strjoin(cache, buffer);
		len = check_line(cache);
		if (len >= 0)
			return (allocater(&cache, len));
	}
	return (returner(&cache));
}
