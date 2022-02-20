# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 15:16:20 by sookang           #+#    #+#              #
#    Updated: 2022/02/20 10:14:31 by sooho            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
LIBFT_NAME=libft.a

CC=gcc
CFLAGS=-Wall  -Wextra
#-Werror 
RM=rm -f

SRC_PATH=./src/
LIBFT_PATH=./libft/

FILES=ft_push_swap\
	  ft_parser\
      ft_util\
	  ft_node\
	  ft_stack\
	  ft_stack2\
	  ft_stack3\
	  ft_push\
	  ft_swap\
	  ft_rotate\
	  ft_rotate2\
	  ft_quick_sort\
	  ft_game\

SRCS=$(addprefix $(SRC_PATH),$(addsuffix .c,$(FILES)))

all:$(NAME)

$(NAME):$(SRCS) $(LIBFT_NAME)
	$(CC) $(CFLAGS) -o $@ -lft -L./ $(SRCS)

$(LIBFT_NAME):
	@make -C $(LIBFT_PATH)
	@cp $(LIBFT_PATH)$(LIBFT_NAME) ./

clean:
	@make clean -C $(LIBFT_PATH)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	$(RM) $(LIBFT_NAME)
	$(RM) $(NAME)

re:fclean all


.PHONY: all clean fclean re 
