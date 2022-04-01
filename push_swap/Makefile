# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 16:33:44 by sookang           #+#    #+#              #
#    Updated: 2022/04/01 16:33:46 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=push_swap
LIBFT_NAME=libft.a

CC=gcc
CFLAGS=-Wall -Werror -Wextra

SRC_PATH=./src/
LIBFT_PATH=./libft/

RM=rm -rf

FILES	=	main			\
				list		\
				list_sort		\
				list_u1		\
				list_u2		\
				check			\
				init			\
				case			\
				algo_short	\
				algo_bigger	\
				norm			\
				get			\
				op_p			\
				op_r			\
				op_s 			\
				util

SRCS=$(addprefix $(SRC_PATH),$(addsuffix .c,$(FILES)))

all:$(NAME)

$(NAME):$(SRCS) $(LIBFT_NAME)
	$(CC) $(CFLAGS) -o $@ -lft -L./ $(SRCS)

$(LIBFT_NAME):
	@make -C $(LIBFT_PATH) $(LIBFT_NAME)
	@cp $(LIBFT_PATH)$(LIBFT_NAME) ./

re: fclean all

clean:
	@make clean -C $(LIBFT_PATH)

fclean:
	@make fclean -C $(LIBFT_PATH)
	$(RM) $(LIBFT_NAME)
	$(RM) $(NAME)

.PHONY: all clean fclean re
