

#include "ft_push_swap.h"

void ft_ra(t_stack *stack)
{
	ft_shift_back_stack(stack);
	ft_putendl_fd("ra", 1);
}

void ft_rb(t_stack *stack)
{
	ft_shift_back_stack(stack);
	ft_putendl_fd("rb", 1);
}

void ft_rr(t_stack *a_stack, t_stack *b_stack)
{
	ft_ra(a_stack);
	ft_ra(b_stack);
}
