# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 20:18:37 by sookang           #+#    #+#              #
#    Updated: 2021/03/19 18:49:38 by sookang          ###   ########.fr        #
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

# # $@: name of target
# # $<: name of first 의존성
# # $^: name of all 의존성
# #%.o: %.c : %이름을 가진 .o 파일을 생성하는데 사용하는 %.c파일  %는 같은이름
