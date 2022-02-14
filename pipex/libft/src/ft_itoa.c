/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:44:43 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 15:53:50 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_sign(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	get_i_digit(int n)
{
	int		digit;

	digit = 0;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;
	int		sign;

	sign = 1;
	digit = 0;
	if (n == 0)
		return (ft_strdup("0"));
	digit = get_i_digit(n);
	sign *= ft_check_sign(n);
	if (sign == -1)
		digit++;
	str = (char *)malloc((digit + 1) * sizeof(char));
	if (!str)
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
