/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:36:19 by sooho             #+#    #+#             */
/*   Updated: 2022/02/19 14:12:22 by sooho            ###   ########.fr       */
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

// ft_parser.c
int ft_isnumber(char *str);
char *ft_cutzero(char *str);
char **ft_parse_args(int argc, char **argv);

//ft_node.c
t_node *ft_create_node(int value, t_node *prev, t_node *next);
void ft_free_node(t_node *node);

//ft_stack.c
void ft_push_front_stack(t_stack *stack, int value);
void ft_push_back_stack(t_stack *stack, int value);
int *ft_pop_front_stack(t_stack *stack);
int *ft_pop_back_stack(t_stack *stack);

//ft_stack2.c
void ft_shift_front_stack(t_stack *stack);
void ft_shift_back_stack(t_stack *stack);
void ft_swap_front(t_stack *stack);

//ft_stack3.c
int ft_check_hasvalue_stack(t_stack *stack, int value);
int ft_check_issorted_stack(t_stack *stack);
void ft_print_stack(t_stack *stack, int fd);
t_stack *ft_init_stack(char **args);
void ft_free_stack(t_stack *stack);

//ft_play.c
void ft_play(t_stack *a,t_stack *b);

//ft_push.c
void ft_pa(t_stack *a, t_stack *b);
void ft_pb(t_stack *a, t_stack *b);

//ft_swap.c
void  ft_sa(t_stack *stack);
void  ft_sb(t_stack *stack);
void ft_ss(t_stack *a_stack, t_stack *b_stack);

//ft_rotate.c
void ft_ra(t_stack *stack);
void ft_rb(t_stack *stack);
void ft_rr(t_stack *a_stack,t_stack *b_stack);

//ft_rotate2.c
void ft_rra(t_stack *stack);
void ft_rrb(t_stack *stack);
void ft_rrr(t_stack *a_stack,t_stack *b_stack);

#endif
