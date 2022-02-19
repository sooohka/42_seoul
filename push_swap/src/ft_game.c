
#include "ft_push_swap.h"

int *ft_stack_to_array(t_stack *stack)
{
	int    *arr;
	int     i;
	t_node *cur_node;

	i = 0;

	arr = (int *) malloc(stack->size * sizeof(int));
	cur_node = stack->front;
	while (cur_node)
	{
		arr[i] = cur_node->value;
		i++;
		cur_node = cur_node->next;
	}
	return arr;
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int *ft_quick_sort(int *arr, int start, int end)
{
	int left;
	int right;
	int pivot;

	if (start >= end)
		return arr;
	pivot = start;
	left = pivot + 1;
	right = end;
	while (left <= right)
	{
		if (arr[left] > arr[pivot] && arr[right] < arr[pivot])
			swap(&arr[left], &arr[right]);
		if (arr[pivot] >= arr[left])
			left += 1;
		if (arr[pivot] <= arr[right])
			right -= 1;
	}
	swap(&arr[pivot], &arr[right]);
	ft_quick_sort(arr, start, right - 1);
	ft_quick_sort(arr, right + 1, end);
	return NULL;
}

// a가 큰거
// b가 작은거

void ft_play(t_stack *a_stack, t_stack *b_stack)
{
	int *arr;

	if (ft_check_issorted_stack(a_stack) == 1)
		return;
	arr = ft_stack_to_array(a_stack);
	ft_quick_sort(arr, 0, a_stack->size - 1);

	for (int i = 0; i < a_stack->size; i++)
		ft_putendl_fd(ft_itoa(arr[i]), 1);

	// logger
	ft_putendl_fd("A_STACK", 1);
	ft_print_stack(a_stack, 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("B_STACK", 1);
	ft_print_stack(b_stack, 1);
	ft_putendl_fd("", 1);
}
