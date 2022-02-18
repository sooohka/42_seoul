/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:36:19 by sooho             #+#    #+#             */
/*   Updated: 2022/02/18 18:29:10 by sooho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

#include "../libft/src/libft.h"
long ft_atol(const char *string);
void ft_free(char **str);
void ft_error();

typedef struct s_node t_node;
struct s_node
{
	int     value;
	t_node *prev;
	t_node *next;
};

typedef struct s_stack t_stack;

struct s_stack
{
	int     size;
	t_node *front;
	t_node *back;
};

t_node *ft_create_node(int value, t_node *prev, t_node *next);
void ft_free_node(t_node *node);

void ft_push_front_stack(t_stack *stack, int value);
void ft_push_back_stack(t_stack *stack, int value);
int ft_pop_front_stack(t_stack *stack);
int ft_pop_back_stack(t_stack *stack);
void ft_shift_front_stack(t_stack *stack);
void ft_shift_back_stack(t_stack *stack);
void ft_swap_front(t_stack *stack);

int ft_check_duplicate_stack(t_stack *stack, int value);
void ft_print_stack(t_stack *stack, int fd);
t_stack *ft_init_stack(char **args);

#endif
