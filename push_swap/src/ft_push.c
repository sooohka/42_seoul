

#include "ft_push_swap.h"

void ft_pa(t_stack *a, t_stack *b)
{
	int *value_ptr;
	int  value;

	if (b->size == 0)
		return;
	value_ptr = ft_pop_front_stack(b);
	value = *value_ptr;
	ft_putendl_fd(ft_itoa(*value_ptr), 1);
	if (value_ptr == NULL)
		return;
	ft_push_front_stack(a, value);
}

void ft_pb(t_stack *a, t_stack *b)
{
	int *value_ptr;
	int  value;

	if (a->size == 0)
		return;
	value_ptr = ft_pop_front_stack(a);
	value = *value_ptr;
	ft_putendl_fd(ft_itoa(*value_ptr), 1);
	if (value_ptr == NULL)
		return;
	ft_push_front_stack(b, value);
}
