/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_etc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:23:41 by sookang           #+#    #+#             */
/*   Updated: 2022/02/15 18:45:49 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_handle_error(char *str)
{
	perror(str);
	exit(1);
}

void	ft_free(char **str)
{
	char	**str_start;

	str_start = str;
	while (*str)
		free(*str++);
	free(str_start);
}

char	*ft_make_cmd(char *cmd, char *path)
{
	char	*parsed_path;
	char	*temp;

	if (cmd[0] == 47)
		return (cmd);
	temp = ft_strjoin(path, "/");
	parsed_path = ft_strjoin(temp, cmd);
	free(temp);
	return (parsed_path);
}
