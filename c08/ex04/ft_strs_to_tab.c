/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:37:36 by sookang           #+#    #+#             */
/*   Updated: 2021/03/16 13:44:36 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char				ft_strlen(char *str)
{
	int	i;

	if (!str[0])
		return (0);
	i = -1;
	while (str[++i])
		;
	return (i);
}

char				*ft_strdup(char *src)
{
	char		*str;
	int			i;

	i = 0;
	if ((str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))) == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*stock_str;
	int				i;

	i = 0;
	if (!(stock_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac && av[i])
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_str[i].size = 0;
	stock_str[i].str = 0;
	stock_str[i].copy = 0;
	return (stock_str);
}
