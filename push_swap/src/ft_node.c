
#include "ft_push_swap.h"
#include <stdlib.h>

t_node *ft_create_node(int value, t_node *prev, t_node *next)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	node->value = value;
	node->next = next;
	node->prev = prev;
	return node;
}

void ft_free_node(t_node *node){
	free(node);
}
