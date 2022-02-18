
#include "ft_push_swap.h"
void ft_rra(t_stack *stack)
{
	ft_shift_front_stack(stack);
}

void ft_rrb(t_stack *stack)
{
	ft_shift_front_stack(stack);
};
void ft_rrr(t_stack *a_stack, t_stack *b_stack)
{
	ft_rra(a_stack);
	ft_rra(b_stack);
}
