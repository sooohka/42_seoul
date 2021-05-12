/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:42:38 by sookang           #+#    #+#             */
/*   Updated: 2021/05/12 12:1 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
	int   temp;
	char *str;
	int   digit;
	int   sign;

	sign = 1;
	digit = 0;
	temp = n;
	if (n == 0)
		return ft_strdup("0");
	if (n < 0)
	{
		sign *= -1;
		digit++;
	}
	while (temp != 0)
	{
		temp /= 10;
		digit++;
	}
	if (!(str = (char *) malloc((digit + 1) * sizeof(char))))
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

int main()
{
	printf("%s", ft_itoa(-2134515)) ;
}