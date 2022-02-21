#include "ft_push_swap.h"
#include <stdlib.h>
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

	ft_putstr_fd("sort_a_stack len: ", 1);
	ft_putendl_fd(ft_itoa(len), 1);
	ra_count = 0;
	pb_count = 0;
	middle = ft_find_middle(a_stack, len);
	ft_putstr_fd("middle:", 1);
	ft_putendl_fd(ft_itoa(middle->value), 1);
	if (ft_check_issorted_stack(a_stack, len))
		return;
	if (middle == NULL)
		return;
	while (len > 0)
	{
		if (a_stack->front->value < middle->value)
		{
			ft_pb(a_stack, b_stack);
			pb_count += 1;
		}
		else if (a_stack->front->value >= middle->value)
		{
			ft_ra(a_stack);
			ra_count += 1;
		}
		len -= 1;
	}
	logger(a_stack, b_stack);
	ft_putendl_fd("----------", 1);
	ft_sort_a_stack(a_stack, b_stack, a_stack->size);
}

void ft_play(t_stack *a_stack, t_stack *b_stack)
{
	t_node *middle;
	int     ra_count;

	ra_count = 0;
	if (ft_check_issorted_stack(a_stack, a_stack->size) == 1)
		return;

	ft_sort_a_stack(a_stack, b_stack, a_stack->size);
	logger(a_stack, b_stack);
}

void logger(t_stack *a_stack, t_stack *b_stack)
{
	ft_putendl_fd("---------------A_STACK---------------", 1);
	ft_print_stack(a_stack, 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("---------------B_STACK---------------", 1);
	ft_print_stack(b_stack, 1);
	ft_putendl_fd("", 1);
}
