/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:53:42 by sookang           #+#    #+#             */
/*   Updated: 2022/04/01 16:54:33 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/src/libft.h"
# include <ctype.h>
# include <limits.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define PB 1
# define RA 2
# define RRA 3
# define PA 4
# define RB 5
# define RRB 6
# define SB 7
# define SA 8

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct s_var
{
	char			*line;
	char			**split;
	char			**argv;
	int				argc;
	int				len;
	int				print;
	int				fd;
	t_stack			*a;
	t_stack			*b;
}					t_var;

void				rr_stack(t_stack **stack_1, t_stack *tmp);
void				p_stack(t_stack **stack_1, t_stack **stack_2, t_stack *tmp);
void				r_stack(t_stack **stack);
void				s_stack(t_stack **stack);

int					check_sort(t_stack **stack, int len);
void				check_dup(char **strs);
int					check_numbers(char **strs);
int					check_pivot(t_stack *stack, int a, int b);
void				pick_case(t_stack **stack_1, t_stack **stack_2, int op,
						t_var *v);
void				sort_short(t_stack **stack_1, t_stack **stack_2, int op,
						t_var *v);
void				sort_bigger(t_stack **stack_1, t_stack **stack_2, int op,
						t_var *v);
void				normalize_a(t_stack **stack_1, t_stack **stack_2, t_var *v,
						int b);
void				normalize_b(t_stack **stack_1, t_stack **stack_2, t_var *v,
						int b);

void				ft_exit_ps(char *str, int fd);
t_var				*ft_init_var(t_var *v);
t_stack				*fill_list(t_var *v, char **split, t_stack *stack);
void				ft_free_array(char **array);
t_stack				*ft_lst_dup(t_stack *stack);
t_stack				*ft_lstsort(t_stack *stack);

int					list_size(t_stack *stack);
void				add_back(t_stack **stack, t_stack *tmp);
void				add_back_r(t_stack **stack);
void				add_front(t_stack **stack, t_stack *tmp);
void				free_stack(t_stack **stack);
t_stack				*ft_lst_bottom(t_stack *tmp);
int					ft_lstnbr(t_stack **stack, int a);
int					get_min(t_stack *tmp);
int					get_max(t_stack *tmp);
int					get_idx(t_stack *tmp, int a, int b);
int					get_pivot(t_stack *tmp);

int					ft_strcmp(char *s1, char *s2);
long long			ft_atol(char *s);
int					ft_abs(float num);

#endif
