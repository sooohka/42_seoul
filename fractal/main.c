/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:23:25 by sookang           #+#    #+#             */
/*   Updated: 2022/03/03 15:23:28 by sookang          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "fract_ol.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (throw_error(INPUT_ERROR));
	if (!ft_strncmp(argv[1], "Mandelbrot", ft_strlen("Mandelbrot") + 1))
	{
		if (!mandel_main())
			return (throw_error(MLX_ERROR));
	}
	else if (!ft_strncmp(argv[1], "Julia", ft_strlen("Julia") + 1))
	{
		if (!julia_main())
			return (throw_error(MLX_ERROR));
	}
	else
		return (throw_error(INPUT_ERROR));
	return (0);
}
