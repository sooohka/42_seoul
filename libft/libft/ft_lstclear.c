/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:31:11 by sookang           #+#    #+#             */
/*   Updated: 2021/05/17 15:35:48 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *cur;
	t_list *next;

	cur = *lst;
	if (!cur)
		return ;
	while (cur)
	{
		del(cur->content);
		next = cur->next;
		free(cur);
		cur = next;
	}
	*lst = NULL;
}
