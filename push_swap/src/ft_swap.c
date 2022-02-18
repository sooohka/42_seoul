
#include "ft_push_swap.h"

void ft_sa(t_stack *stack)
{
	if (stack->front == NULL || stack->front->next == NULL)
		return;
	ft_swap_front(stack);
}

void ft_sb(t_stack *stack)
{
	if (stack->front == NULL || stack->front->next == NULL)
		return;
	ft_swap_front(stack);
}

void ft_ss(t_stack *a_stack, t_stack *b_stack)
{
	ft_sa(a_stack);
	ft_sb(b_stack);
}
