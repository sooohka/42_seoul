#include "./ft_push_swap.h"
#include <stdlib.h>

void ft_push_back_stack(t_stack *stack, int value)
{
	t_node *node;

	node = ft_create_node(value, NULL, NULL);
	stack->size += 1;
	if (stack->front == NULL && stack->back == NULL)
	{
		stack->size = 1;
		stack->front = node;
		stack->back = node;
		return;
	}
	stack->back->next = node;
	node->prev = stack->back;
	stack->back = node;
}

void ft_push_front_stack(t_stack *stack, int value)
{
	t_node *node;

	node = ft_create_node(value, NULL, NULL);
	stack->size += 1;
	if (stack->front == NULL && stack->back == NULL)
	{
		stack->size = 1;
		stack->front = node;
		stack->back = node;
		return;
	}
	stack->front->prev = node;
	node->next = stack->front;
	stack->front = node;
}

int *ft_pop_front_stack(t_stack *stack)
{
	int     val;
	int    *val_ptr;
	t_node *temp;

	if (stack->size == 0)
		return NULL;
	val = stack->front->value;
	val_ptr = &val;
	if (stack->size == 1)
	{
		ft_free_node(stack->front);
		stack->front = NULL;
		stack->back = NULL;
	}
	else
	{
		temp = stack->front->next;
		ft_free_node(stack->front);
		stack->front = temp;
		stack->front->prev = NULL;
	}
	stack->size -= 1;
	return (val_ptr);
}

int *ft_pop_back_stack(t_stack *stack)
{
	int     val;
	int    *val_ptr;
	t_node *temp;

	if (stack->size == 0)
		return NULL;
	val = stack->front->value;
	val_ptr = &val;
	if (stack->size == 1)
	{
		ft_free_node(stack->front);
		stack->front = NULL;
		stack->back = NULL;
	}
	else
	{
		temp = stack->back->prev;
		ft_free_node(stack->back);
		stack->back = temp;
		stack->back->next = NULL;
	}
	stack->size -= 1;
	return (val_ptr);
}
