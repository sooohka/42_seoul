/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:44:43 by sookang           #+#    #+#             */
/*   Updated: 2021/05/12 16:48:11 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_digit(int n)
{
	int digit;

	digit = 0;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		digit;
	int		sign;

	sign = 1;
	digit = 0;
	if (n == 0)
		return (ft_strdup("0"));
	digit = get_digit(n);
	if (n < 0)
	{
		sign *= -1;
		digit++;
	}
	if (!(str = (char *)malloc((digit + 1) * sizeof(char))))
		return (NULL);
	str[digit--] = 0;
	while (n != 0)
	{
		str[digit--] = ((n % 10) * sign) + 48;
		n /= 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}
