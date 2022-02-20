#include "ft_push_swap.h"
void logger(t_stack *a_stack, t_stack *b_stack);
void ft_sort_b_stack(t_stack *a_stack, t_stack *b_stack, int len);

/*
 ** a가 큰거
 ** b가 작은거
 ** stack 반으로 쪼갠다.
 */
void ft_split_stack(t_stack *a_stack, t_stack *b_stack, int middle)
{
	t_node *front;

	front = a_stack->front;
	while (1)
	{
		if (a_stack->front->value < middle)
			ft_pb(a_stack, b_stack);
		else if (a_stack->front->value >= middle)
			ft_ra(a_stack);
		if (a_stack->front == front)
			return;
	}
}

void ft_sort_a_stack(t_stack *a_stack, t_stack *b_stack, int len)
{
	t_node *middle;
	int     ra_count;
	int     pb_count;

	ra_count = 0;
	pb_count = 0;
	if (len == 1)
		return;
	if (ft_check_issorted_stack(a_stack, len))
		return;
	middle = ft_find_middle(a_stack, len);
	ft_putstr_fd("middle: ", 1);
	ft_putendl_fd(ft_itoa(middle->value), 1);
	if (middle == NULL)
		return;
	while (len > 0)
	{
		if (a_stack->front->value <= middle->value)
		{
			ft_pb(a_stack, b_stack);
			pb_count += 1;
		}
		else if (a_stack->front->value > middle->value)
		{
			ft_ra(a_stack);
			ra_count += 1;
		}
		len -= 1;
	}
	while (ra_count > 0)
	{
		ft_rra(a_stack);
		ra_count -= 1;
	}
	ft_sort_b_stack(a_stack, b_stack, pb_count);
	ft_sort_a_stack(a_stack, b_stack, a_stack->size);
}

void ft_sort_b_stack(t_stack *a_stack, t_stack *b_stack, int len)
{
	t_node *middle;
	int     rb_count;
	int     pa_count;

	rb_count = 0;
	pa_count = 0;
	if (len == 0)
		return;
	/** if (len == 1) */
	/** { */
	/**     ft_pa(a_stack, b_stack); */
	/**     return; */
	/** } */
	if (ft_check_issorted_stack(b_stack, len))
		return;
	middle = ft_find_middle(b_stack, len);
	ft_putstr_fd("middle: ", 1);
	ft_putendl_fd(ft_itoa(middle->value), 1);
	if (middle == NULL)
		return;
	while (len > 0)
	{
		if (b_stack->front->value <= middle->value)
		{
			ft_pa(a_stack, b_stack);
			pa_count += 1;
		}
		else if (b_stack->front->value > middle->value)
		{
			ft_rb(b_stack);
			rb_count += 1;
		}
		len -= 1;
	}
	while (rb_count > 0)
	{
		ft_rrb(b_stack);
		rb_count -= 1;
	}
	ft_sort_a_stack(a_stack, b_stack, pa_count);
	ft_sort_b_stack(a_stack, b_stack, b_stack->size);
}

void ft_play(t_stack *a_stack, t_stack *b_stack)
{
	t_node *middle;

	if (ft_check_issorted_stack(a_stack, a_stack->size) == 1)
		return;
	/** middle = ft_find_middle(a_stack, a_stack->size); */
	/** ft_split_stack(a_stack, b_stack, middle->value); */
	ft_sort_a_stack(a_stack, b_stack, a_stack->size);
	logger(a_stack, b_stack);
}

void logger(t_stack *a_stack, t_stack *b_stack)
{
	ft_putendl_fd("A_STACK", 1);
	ft_print_stack(a_stack, 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("B_STACK", 1);
	ft_print_stack(b_stack, 1);
	ft_putendl_fd("", 1);
}
