/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:42:38 by sookang           #+#    #+#             */
/*   Updated: 2021/05/11 15:03:20 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
	int   temp;
	char *str;
	int   digit;
	char *loc;

	digit = 0;
	temp = n;
	if (n == 0)
		return ft_strdup("0");
	while (temp > 0)
	{
		temp /= 10;
		digit++;
	}
	if (!(str = (char *) malloc((digit + 1) * sizeof(char))))
		return (NULL);
	loc = str;
	while (n > 0)
	{
		*loc = n % 10 + 48;
		n /= 10;
		loc++;
	}
	return (str);
}

int main()
{
	printf("%s", ft_itoa(123));
}