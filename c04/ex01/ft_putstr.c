/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:21:48 by sookang           #+#    #+#             */
/*   Updated: 2021/03/01 16:25:42 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i=-1;
	while(str[++i])
	{
		write(1,&str[i],1);
	}
}

#include <stdio.h>
int main()
{
	ft_putstr("");
	printf("\n");
	ft_putstr("\0");
	printf("\n");
	ft_putstr("hello");
	printf("\n");
	ft_putstr("bye");
}
