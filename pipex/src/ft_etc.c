/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_etc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:23:41 by sookang           #+#    #+#             */
/*   Updated: 2022/02/15 17:01:09 by sooho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"
#include <stdio.h>

void ft_handle_error(char *str)
{
	perror(str);
	exit(1);
}

void ft_free(char **str)
{
	while(*str)
	{
		free(*str);
		str++;
	}
}
