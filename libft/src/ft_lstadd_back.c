/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:56:29 by sookang           #+#    #+#             */
/*   Updated: 2022/02/15 18:56:02 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newlst)
{
	t_list	*cur;

	if (!lst)
		return ;
	cur = *lst;
	if (!cur)
		*lst = newlst;
	else
		ft_lstlast(cur)->next = newlst;
}
