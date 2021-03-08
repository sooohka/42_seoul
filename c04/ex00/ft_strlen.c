/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:09:11 by sookang           #+#    #+#             */
/*   Updated: 2021/03/01 16:20:36 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		return (i);
	while (str[++i])
		;
	return (i);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *str1 = "hello";
	char *str2 = "bye";
	printf("%d", (int)strlen(str1));
	printf("%d", (int)strlen(str2));
	printf("%d", ft_strlen(str1));
	printf("%d", ft_strlen(str2));
	printf("%d", (int)strlen(""));
	printf("%d", ft_strlen(""));
}
