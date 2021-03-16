/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:59:08 by sookang           #+#    #+#             */
/*   Updated: 2021/03/16 12:09:37 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct		s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}					t_stock_str;

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);