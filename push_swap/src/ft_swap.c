
#include "ft_push_swap.h"

void ft_sa(t_stack *stack)
{
	int status;

	if (stack->front == NULL || stack->front->next == NULL)
		return;
	status = ft_swap_front(stack);
	if (status == 0)
		return;
	ft_putendl_fd("sa", 1);
}

void ft_sb(t_stack *stack)
{
	int status;

	if (stack->front == NULL || stack->front->next == NULL)
		return;
	status = ft_swap_front(stack);
	if (status == 0)
		return;
	ft_putendl_fd("sb", 1);
}

void ft_ss(t_stack *a_stack, t_stack *b_stack)
{
	ft_sa(a_stack);
	ft_sb(b_stack);
}
