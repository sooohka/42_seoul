# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 20:18:37 by sookang           #+#    #+#              #
#    Updated: 2021/03/18 16:35:55 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
TARGET	=	libft.a
SRCS	=	./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJS	=	$(SRCS:.c=.o)
INCS	=	./includes


all			:	$(TARGET)

$(TARGET)	:	$(OBJS)
	ar rc $(TARGET) $^

%.o			:	%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

clean		:
	rm -f $(OBJS)

fclean		:	clean
	rm -r $(TARGET)

re			:	fclean $(TARGET)
