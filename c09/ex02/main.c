/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:22:29 by sookang           #+#    #+#             */
/*   Updated: 2021/03/18 15:19:13 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split(char *str, char *charset);
int    get_strs_length(char *str, char *charset);

#include <stdio.h>

int main()
{
	char   *str = "d04xSbQcDWjFVC2XRpymbBNz4zeccMS4O";
	char   charset[] = "kOP";
	char **strs;
	int    i;

	i = 0;
	printf("%d\n",get_strs_length(str,charset));
	strs = ft_split(str, charset);
	while (strs[i])
	{
		printf("%s", strs[i]);
		printf("\n");
		i++;
	}
	return (0);
}
