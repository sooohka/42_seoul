#include "ft_push_swap.h"

t_stack *ft_init_stack(char **args)
{
	t_stack *stack;
	t_node  *cur_node;

	stack = malloc(sizeof(t_stack));
	stack->size = 0;
	while (*args)
	{
		ft_push_back_stack(stack, ft_atoi(*args));
		/** ft_push_front_stack(stack, ft_atoi(*args)); */
		args++;
	}
	return stack;
}

int ft_check_duplicate_stack(t_stack *stack, int value)
{
	return (1);
}

void ft_print_stack(t_stack *stack, int fd)
{
	t_node *cur_node;

	cur_node = stack->front;
	while (cur_node)
	{
		ft_putstr_fd("prev:", 1);
		if (cur_node->prev == NULL)
			ft_putstr_fd("NULL", 1);
		else
			ft_putstr_fd(ft_itoa(cur_node->prev->value), 1);
		ft_putstr_fd("\t\tnext:", 1);
		if (cur_node->next == NULL)
			ft_putstr_fd("NULL", 1);
		else
			ft_putstr_fd(ft_itoa(cur_node->next->value), 1);
		ft_putstr_fd("\t\tvalue::", 1);
		ft_putendl_fd(ft_itoa(cur_node->value), fd);
		cur_node = cur_node->next;
	}
	ft_putstr_fd("size: ", fd);
	ft_putendl_fd(ft_itoa(stack->size), fd);
	ft_putstr_fd("front: ", fd);
	ft_putendl_fd(ft_itoa(stack->front->value), fd);
	ft_putstr_fd("back: ", fd);
	ft_putendl_fd(ft_itoa(stack->back->value), fd);
}
