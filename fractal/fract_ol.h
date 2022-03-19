/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:23:39 by sookang           #+#    #+#             */
/*   Updated: 2022/03/03 15:23:41 by sookang          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACT_OL_H
# define FRACT_OL_H

# include "minilibx_opengl/mlx.h"
# include "libft/src/libft.h"
# include <math.h>

# define WIDTH 1000
# define HEIGHT 1000
# define N_NUM 50
# define MAX_X 2.1
# define MAX_Y 2.1
# define DX 0.004
# define DY 0.004
# define ZOOM_MAX 50

# define PURPLE 0x008B00FF
# define BLUE 0x000000FF
# define YELLOW 0x00FFFF00
# define BLACK 0x00000000
# define WHITE 0x00FFFFFF

# define ESC 53
# define CLK_LEFT 1
# define CLK_RIGHT 2
# define ZOOM_IN 5
# define ZOOM_OUT 4

# define INPUT_ERROR "INPUT ARG(S) INVALIED!\nYou can use Mandelbrot or Julia\n"
# define MLX_ERROR "MLX ERROR!"

/*
** complex
*/
typedef struct s_complex
{
	double	real;
	double	imaginary;
}	t_complex;

/*
** img data
*/
typedef struct s_img
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_img;

/*
** complete data
*/
typedef struct s_vars
{
	void		*mlx;
	void		*win;
	double		zoom;
	t_complex	num;
	t_img		img;
}	t_vars;

/*
** prints
*/
int			mandel_main(void);
int			julia_main(void);

/*
** utils.c
*/
void		pixel_put(t_img *data, int x, int y, int color);
int			key_hook(int keycode, t_vars *vars);
int			throw_error(char *s);

/*
** complex.c
*/
void		init_complex(t_complex *i, double real, double imaginary);
t_complex	pow_complex(t_complex i);
t_complex	sum_complex(t_complex a, t_complex b);
int			isdvg_complex(t_complex i);

#endif
