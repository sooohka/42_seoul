/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:23:55 by sookang           #+#    #+#             */
/*   Updated: 2022/03/03 15:23:57 by sookang          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "fract_ol.h"

void	init_complex(t_complex *i, double real, double imaginary)
{
	i->real = real;
	i->imaginary = imaginary;
}

t_complex	pow_complex(t_complex i)
{
	t_complex	rtn;

	rtn.real = pow(i.real, 2.0) - pow(i.imaginary, 2.0);
	rtn.imaginary = 2 * i.real * i.imaginary;
	return (rtn);
}

t_complex	sum_complex(t_complex a, t_complex b)
{
	t_complex	rtn;

	rtn.real = a.real + b.real;
	rtn.imaginary = a.imaginary + b.imaginary;
	return (rtn);
}

int	isdvg_complex(t_complex i)
{
	if (pow(i.real, 2.0) + pow(i.imaginary, 2.0) > 4.0)
		return (1);
	else
		return (0);
}
