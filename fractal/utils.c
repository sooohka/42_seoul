/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:22:51 by sookang           #+#    #+#             */
/*   Updated: 2022/03/03 16:09:30 by sookang          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "fract_ol.h"

void	pixel_put(t_img *data, int x, int y, int color)
{
	char	*dst;
	int		line_length;
	int		bits_per_pixel;

	if (x < WIDTH && y < HEIGHT)
	{
		line_length = data -> line_length;
		bits_per_pixel = data -> bits_per_pixel;
		dst = data->addr + (y * line_length + x * (bits_per_pixel / 8));
		*(unsigned int *)dst = color;
	}
}

int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == ESC)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
	return (0);
}

int	throw_error(char *s)
{
	ft_putstr_fd(s, 2);
	return (0);
}
