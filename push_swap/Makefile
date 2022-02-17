# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 15:16:20 by sookang           #+#    #+#              #
#    Updated: 2022/02/17 15:26:08 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
LIBFT_NAME=libft.a

CC=gcc
CFLAGS=-Wall -Werror -Wextra
RM=rm -f

SRC_PATH=./src/
LIBFT_PATH=./libft/

FILES=ft_push_swap

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
