/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:42:30 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 17:40:51 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*head;
	t_list	*front;
	t_list	*next_child;

	if (!lst)
		return (NULL);
	cur = lst;
	head = ft_lstnew(f(cur->content));
	front = head;
	cur = cur->next;
	while (cur)
	{
		next_child = ft_lstnew(f(cur->content));
		if (!next_child)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		cur = cur->next;
		head->next = next_child;
		head = head->next;
	}
	return (front);
}
