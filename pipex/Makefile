# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 15:26:54 by sookang           #+#    #+#              #
#    Updated: 2022/02/14 17:23:13 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=pipex
LIBFT_NAME=libft.a


CC=gcc
CFLAGS=-Wall -Werror -Wextra

SRC_PATH=./src/
LIBFT_PATH=./libft/

RM=rm -rf

FILES=ft_pipex\
	  ft_etc


SRCS=$(addprefix $(SRC_PATH),$(addsuffix .c,$(FILES)))


all:$(NAME)

$(NAME):$(SRCS) $(LIBFT_NAME)
	$(CC) $(CFLAGS) -o $@ -lft -L./ $^

$(LIBFT_NAME):
	@make -C $(LIBFT_PATH) $(LIBFT_NAME)
	@cp $(LIBFT_PATH)$(LIBFT_NAME) ./


re: fclean all

clean:
	@make clean -C  $(LIBFT_PATH)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIBFT_NAME)
	$(RM) $(NAME)

.PHONY: all clean fclean re bonus
