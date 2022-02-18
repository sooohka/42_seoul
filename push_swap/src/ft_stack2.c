#include "ft_push_swap.h"

void ft_shift_front_stack(t_stack *stack)
{
	t_node *front;
	t_node *back;

	if (stack->size == 0)
		return;
	front = stack->front;
	back = stack->back;

	front->prev = back;
	front->next = front->next;
	stack->front = back;

	back->prev->next = NULL;
	stack->back = back->prev;
	back->prev = NULL;
	back->next = front;
}

void ft_shift_back_stack(t_stack *stack)
{
	t_node *front;
	t_node *back;

	if (stack->size == 0)
		return;
	front = stack->front;
	back = stack->back;

	back->next = front;
	back->prev = back->prev;
	stack->back = front;

	front->next->prev = NULL;
	front->prev = back;
	stack->front = front->next;
	front->next = NULL;
}

void ft_swap_front(t_stack *stack)
{
	int temp;

	if (stack->front == NULL && stack->front->next == NULL)
		return;

	temp = stack->front->value;
	stack->front->value = stack->front->next->value;
	stack->front->next->value = temp;
}
