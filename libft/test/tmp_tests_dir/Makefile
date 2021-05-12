# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 15:27:20 by sookang           #+#    #+#              #
#    Updated: 2021/05/12 11:33:37 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		= gcc
CFlAGS	= -Werror -Wall -Wextra

RM		= rm -f

FILES=	$(basename $(notdir $(wildcard ./*.c)))
SRCS=	$(addprefix ./,$(addsuffix .c, $(FILES)))
OBJS=	$(addprefix ./,$(addsuffix .o, $(FILES)))

NAME = libft.a

all	:	$(NAME)

echo:
	@echo FILE: $(FILES)
	@echo SRCS: $(SRCS)
	@echo OBJS: $(OBJS)

$(NAME): $(OBJS)
	ar rc $@ $^

%.o:	%.c %.h
	$(CC) $(CFlAGS) -c $@ $^

re: fclean all

clean:
	$(RM) $(addsuffix .o,$(FILES))

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re