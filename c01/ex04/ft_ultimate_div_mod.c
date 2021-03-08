/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:07:12 by sookang           #+#    #+#             */
/*   Updated: 2021/02/22 16:12:20 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tempa;
	int tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	*a = tempa;
	*b = tempb;
}
