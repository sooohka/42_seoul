# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 15:27:20 by sookang           #+#    #+#              #
#    Updated: 2021/11/27 17:47:18 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
LIBFT= libft.a

LIBFT_PATH = ./libft/

CC		= gcc
CFLAGS	= -Werror -Wall -Wextra

RM		= rm -f
AR		=ar

FILES = ft_printf

SRCS=	$(addprefix ./,$(addsuffix .c, $(FILES)))
OBJS=	$(addprefix ./,$(addsuffix .o, $(FILES)))

all	:	$(NAME)

$(NAME): $(OBJS)
	@echo "build libft"
	@make -C $(LIBFT_PATH) $(LIBFT)
	@make -C $(LIBFT_PATH) clean
	@mv $(LIBFT_PATH)$(LIBFT) ./$(NAME)
	@cd ..
	$(AR) -rcs $@ $^ 

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $^

re: fclean all

clean:
	$(RM) $(addsuffix .o,$(FILES))

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re bonus