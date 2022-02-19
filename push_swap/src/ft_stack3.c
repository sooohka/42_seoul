#include "ft_push_swap.h"

t_stack *ft_init_stack(char **args)
{
	t_stack *stack;
	t_node  *cur_node;
	int      val;

	stack = malloc(sizeof(t_stack));
	stack->size = 0;
	if (args == NULL)
		return (stack);
	while (*args)
	{
		val = ft_atoi(*args);
		if (!ft_check_hasvalue_stack(stack, val))
			return (NULL);
		ft_push_back_stack(stack, val);
		args++;
	}
	return (stack);
}

void ft_free_stack(t_stack *stack)
{
	t_node *cur_node;
	t_node *temp;

	cur_node = stack->front;
	while (cur_node)
	{
		temp = cur_node->next;
		ft_free_node(cur_node);
		stack->size -= 1;
		cur_node = temp;
	}
	free(stack);
}

int ft_check_hasvalue_stack(t_stack *stack, int value)
{
	t_node *cur_node;

	cur_node = stack->front;
	while (cur_node)
	{
		if (cur_node->value == value)
			return (0);
		cur_node = cur_node->next;
	}
	return (1);
}

int ft_check_issorted_stack(t_stack *stack)
{
	t_node *cur_node;
	int     prev_value;

	prev_value = stack->front->value;
	cur_node = stack->front;
	while (cur_node)
	{
		if (cur_node->value < prev_value)
			return (0);
		prev_value = cur_node->value;
		cur_node = cur_node->next;
	}
	return (1);
}

void ft_print_stack(t_stack *stack, int fd)
{
	t_node *cur_node;

	if (stack->size == 0)
	{
		ft_putendl_fd("STACK IS EMPTY", fd);
		return;
	}
	cur_node = stack->front;
	while (cur_node)
	{
		ft_putstr_fd("prev:", fd);
		if (cur_node->prev == NULL)
			ft_putstr_fd("NULL", fd);
		else
			ft_putstr_fd(ft_itoa(cur_node->prev->value), fd);
		ft_putstr_fd("\t\tnext:", fd);

		if (cur_node->next == NULL)
			ft_putstr_fd("NULL", fd);
		else
			ft_putstr_fd(ft_itoa(cur_node->next->value), fd);
		ft_putstr_fd("\t\tvalue:", fd);
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
