/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:17:54 by sookang           #+#    #+#             */
/*   Updated: 2021/06/22 15:31:27 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

int			returner(char **cache, char **line)
{
	int		len;
	char	*temp;

	if ((len = check_line(*cache)) >= 0)
	{
		*line = ft_cutter(*cache, len);
		temp = ft_strdup(*cache + len + 1);
		free(*cache);
		*cache = temp;
		return (1);
	}
	else if (*cache)
	{
		*line = *cache;
		*cache = 0;
	}
	else
		*line = ft_strdup("");
	return (0);
}

int			get_next_line(int fd, char **line)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*cache[OPEN_MAX];
	int			len;
	int			readed;
	char		*temp;

	if (!line || fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (-1);
	while ((readed = read(fd, buffer, BUFFER_SIZE)))
	{
		if (readed == -1)
			return (-1);
		buffer[readed] = 0;
		cache[fd] = !cache[fd] ? ft_strdup(buffer) :
		ft_strjoin(cache[fd], buffer);
		if ((len = check_line(cache[fd])) >= 0)
		{
			*line = ft_cutter(cache[fd], len);
			temp = ft_strdup(&cache[fd][len + 1]);
			free(cache[fd]);
			cache[fd] = temp;
			return (1);
		}
	}
	return (returner(&cache[fd], line));
}
