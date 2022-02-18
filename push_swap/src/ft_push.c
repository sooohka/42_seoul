

#include "ft_push_swap.h"

void ft_pa(t_stack *a, t_stack *b)
{
	int value;

	if (b->size == 0)
		return;
	value = ft_pop_front_stack(b);
	ft_push_front_stack(a, value);
}

void ft_pb(t_stack *a, t_stack *b)
{
	int value;

	if (a->size == 0)
		return;
	value = ft_pop_front_stack(a);
	ft_push_front_stack(b, value);
}
