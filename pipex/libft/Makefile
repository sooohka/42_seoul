# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 15:27:20 by sookang           #+#    #+#              #
#    Updated: 2021/11/28 17:18:02 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = ./src/

CC		= gcc
CFLAGS	= -Werror -Wall -Wextra

RM		= rm -f
AR		=ar

FILES=	ft_isalnum\
		ft_isprint\
		ft_memcmp\
		ft_putchar_fd\
		ft_split\
		ft_strlcat\
		ft_strncmp\
		ft_substr\
		ft_atoi\
		ft_isalpha\
		ft_itoa\
		ft_memcpy\
		ft_putendl_fd\
		ft_strchr\
		ft_strlcpy\
		ft_strnstr\
		ft_tolower\
		ft_bzero\
		ft_isascii\
		ft_memccpy\
		ft_memmove\
		ft_putnbr_fd\
		ft_strdup\
		ft_strlen\
		ft_strrchr\
		ft_toupper\
		ft_calloc\
		ft_isdigit\
		ft_memchr\
		ft_memset\
		ft_putstr_fd\
		ft_strjoin\
		ft_strmapi\
		ft_strtrim\
		ft_lstadd_back\
		ft_lstadd_front\
		ft_lstclear\
		ft_lstdelone\
		ft_lstiter\
		ft_lstlast\
		ft_lstmap\
		ft_lstnew\
		ft_lstsize\
		ft_unsigned_itoa\
		ft_xtoa\
		ft_tohex

SRCS=	$(addprefix $(SRC_PATH),$(addsuffix .c, $(FILES)))
OBJS=	$(addprefix ./,$(addsuffix .o, $(FILES)))

all	:	$(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $^

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $^

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re
