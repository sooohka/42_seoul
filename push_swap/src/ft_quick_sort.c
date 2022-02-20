#include "ft_push_swap.h"
#include <sys/wait.h>

int *ft_stack_to_array(t_stack *stack, int len)
{
	int    *arr;
	int     i;
	t_node *cur_node;

	i = 0;
	// TODO:문제면 여기
	arr = (int *) malloc((len + 1) * sizeof(int));
	cur_node = stack->front;
	while (i < len)
	{
		arr[i++] = cur_node->value;
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

void ft_quick_sort(int *arr, int start, int end)
{
	int left;
	int right;
	int pivot;

	if (start >= end)
		return;
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
}

t_node *ft_find_middle(t_stack *stack, int len)
{
	int    *arr;
	int     middle;
	t_node *cur_node;

	cur_node = stack->front;
	arr = ft_stack_to_array(stack, len);
	ft_quick_sort(arr, 0, len - 1);
	middle = arr[len / 2];
	free(arr);
	while (cur_node)
	{
		if (cur_node->value == middle)
			return cur_node;
		cur_node = cur_node->next;
	}
	return NULL;
}
