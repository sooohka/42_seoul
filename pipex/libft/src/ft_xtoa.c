/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:16:39 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:16:40 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(unsigned int n)
{
	int		digit;

	digit = 0;
	while (n != 0)
	{
		n /= 16;
		digit++;
	}
	return (digit);
}

static void	ft_uint_to_hex(unsigned int n, char *str, int digit, char cas)
{
	int		temp;
	int		cas_int;

	if (cas == 'x')
		cas_int = 87;
	else
		cas_int = 55;
	str[digit--] = 0;
	while (n != 0)
	{
		temp = n % 16;
		if (temp >= 10)
			temp += cas_int;
		else
			temp += 48;
		str[digit--] = temp;
		n /= 16;
	}
}

char	*ft_xtoa(unsigned int n, char cas)
{
	char	*str;
	int		digit;

	digit = 0;
	if (n == 0)
		return (ft_strdup("0"));
	digit = get_digit(n);
	str = (char *) malloc((digit + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_uint_to_hex(n, str, digit, cas);
	return (str);
}
