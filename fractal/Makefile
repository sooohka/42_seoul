# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 15:28:28 by sookang           #+#    #+#              #
#    Updated: 2022/03/03 15:28:30 by sookang          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		= fractol
LIBFT		= libft
LIBFT_LIB	= libft.a

SRCS		= main.c mandelbrot.c julia.c utils.c complex.c
OBJS		= $(SRCS:.c=.o)

RM			= rm -rf
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -O3
MLXLIB		= minilibx_opengl
MLXFLAGS	= -L$(MLXLIB) -lmlx -framework OpenGl -framework AppKit

$(NAME) : $(OBJS)
	make -C ./$(LIBFT)
	make -C $(MLXLIB)
	$(CC) $(CFLAGS) $(LIBFT)/$(LIBFT_LIB) $(SRCS) -o $(NAME) $(MLXFLAGS)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)
	make clean -C $(MLXLIB)

clean :
	$(RM) $(OBJS)
	make clean -C $(MLXLIB)
	make fclean -C ./$(LIBFT)

re : fclean all

.PHONY : all fclean clean re
