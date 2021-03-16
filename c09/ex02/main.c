/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:22:29 by sookang           #+#    #+#             */
/*   Updated: 2021/03/17 02:08:59 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split(char *str, char *charset);
int    get_strs_length(char *str, char *charset);

#include <stdio.h>

int main()
{
	char   str[] = "         hello wor,ld b,ye,     4, , , ,,home  i";
	char   charset[] = " , ";
	char **strs;
	int    i;

	i = 0;
	strs = ft_split(str, charset);
	while (strs[i])
	{
		printf("%s", strs[i]);
		printf("\n");
		i++;
	}

	return (0);
}
