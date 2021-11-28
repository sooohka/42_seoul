# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 15:27:20 by sookang           #+#    #+#              #
#    Updated: 2021/11/28 15:17:02 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
LIBFT= libft.a

LIBFT_PATH = ./libft/
SRC_PATH = ./src/

CC		= gcc
CFLAGS	= -Werror -Wall -Wextra

RM		= rm -f
AR		= ar

FILES = ft_printf\
				ft_char_format\
				ft_digit_format\
				ft_printf_utils\

SRCS=	$(addprefix $(SRC_PATH),$(addsuffix .c, $(FILES)))
OBJS=	$(addprefix ./,$(addsuffix .o, $(FILES)))

all	:	$(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_PATH) $(LIBFT)
	@cp $(LIBFT_PATH)$(LIBFT) ./$(NAME)
	$(AR) rcs $@ $^ 

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $^


re: fclean all

clean:
	$(RM) $(OBJS)
	@make -C $(LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_PATH) fclean

.PHONY: all clean fclean re bonus