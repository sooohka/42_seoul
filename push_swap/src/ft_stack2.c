#include "ft_push_swap.h"

int ft_shift_front_stack(t_stack *stack)
{
	t_node *front;
	t_node *back;

	if (stack->size == 0 || stack->size == 1)
		return 0;
	front = stack->front;
	back = stack->back;

	front->prev = back;
	front->next = front->next;
	stack->front = back;

	back->prev->next = NULL;
	stack->back = back->prev;
	back->prev = NULL;
	back->next = front;
	return 1;
}

int ft_shift_back_stack(t_stack *stack)
{
	t_node *front;
	t_node *back;

	if (stack->size == 0 || stack->size == 1)
		return 0;
	front = stack->front;
	back = stack->back;

	back->next = front;
	back->prev = back->prev;
	stack->back = front;

	front->next->prev = NULL;
	front->prev = back;
	stack->front = front->next;
	front->next = NULL;
	return 1;
}

int ft_swap_front(t_stack *stack)
{
	int temp;

	if (stack->front == NULL && stack->front->next == NULL)
		return 0;

	temp = stack->front->value;
	stack->front->value = stack->front->next->value;
	stack->front->next->value = temp;
	return 1;
}
