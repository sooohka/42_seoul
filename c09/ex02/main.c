/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:22:29 by sookang           #+#    #+#             */
/*   Updated: 2021/03/19 18:51:49 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split(char *str, char *charset);
int    get_strs_length(char *str, char *charset);

#include <stdio.h>

int main(int argc,char *argv[])
{
	char **strs;
	int    i;
	if(argc==1)
		return 0;
	i = 0;
	printf("%d\n",get_strs_length(argv[1],argv[2]));
	strs = ft_split(argv[1], argv[2]);
	while (strs[i])
	{
		printf("%s", strs[i]);
		printf("\n");
		i++;
	}
	return (0);
}
