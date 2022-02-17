/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:35:08 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:03:11 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(unsigned long int n)
{
	int	digit;

	digit = 0;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_unsigned_itoa(unsigned int n)
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
	str[digit--] = 0;
	while (n != 0)
	{
		str[digit--] = ((n % 10)) + 48;
		n /= 10;
	}
	return (str);
}
