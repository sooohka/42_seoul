/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:42:30 by sookang           #+#    #+#             */
/*   Updated: 2021/05/17 17:25:38 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *cur;
	t_list *new;
	t_list *head;
	t_list *next_child;

	if (!lst)
		return (NULL);
	cur = lst;
	f(cur->content);
	if (!(new = ft_lstnew(cur->content)))
		return (NULL);
	head = new;
	next_child = head;
	cur = cur->next;
	while (cur)
	{
		if (!(new = ft_lstnew(cur->content)))
		{
			ft_lstclear(head, del);
			return (NULL);
		}
		next_child->next = new;
		cur = cur->next;
	}
	return (head);
}
