/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:53:36 by sookang           #+#    #+#             */
/*   Updated: 2021/05/17 15:12:02 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*cur;

	cur = lst;
	len = 0;
	while (cur)
	{
		cur = cur->next;
		len++;
	}
	return (len);
}
