# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 15:27:20 by sookang           #+#    #+#              #
#    Updated: 2021/05/18 15:44:31 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		= gcc
CFlAGS	= -Werror -Wall -Wextra

RM		= rm -f

# FILES=	$(basename $(notdir $(wildcard ./*.c)))
FILES=	ft_isalnum ft_isprint ft_memcmp  ft_putchar_fd ft_split \
					ft_strlcat ft_strncmp ft_substr ft_atoi ft_isalpha \
					ft_itoa ft_memcpy  ft_putendl_fd ft_strchr  ft_strlcpy \
					ft_strnstr ft_tolower ft_bzero   ft_isascii ft_memccpy \
					ft_memmove ft_putnbr_fd  ft_strdup  ft_strlen  ft_strrchr \
					ft_toupper ft_calloc  ft_isdigit ft_memchr  ft_memset  \
					ft_putstr_fd  ft_strjoin ft_strmapi ft_strtrim

BONUS_FILES=	ft_lstadd_back ft_lstadd_front ft_lstclear \
					ft_lstdelone ft_lstiter ft_lstlast \
					ft_lstmap ft_lstnew ft_lstsize

SRCS=	$(addprefix ./,$(addsuffix .c, $(FILES)))
OBJS=	$(addprefix ./,$(addsuffix .o, $(FILES)))
BONUS_OBJS=$(addprefix ./,$(addsuffix .o, $(BONUS_FILES)))
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

bonus:	$(BONUS_OBJS) $(OBJS)
	ar rc $@ $^

clean:
	$(RM) $(addsuffix .o,$(FILES))
	$(RM) $(addsuffix .o,$(BONUS_FILES))

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re bonus