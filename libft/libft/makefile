# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sookang <sookang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 15:27:20 by sookang           #+#    #+#              #
#    Updated: 2021/05/10 21:45:25 by sookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		= gcc
CFlAGS	= -Werror -Wall -Wextra

RM		= rm -f

FILES	= ft_isalnum \
		ft_isdigit\
		ft_memcpy\
		ft_strncmp	\
		ft_atoi		\
		ft_isalpha	\
		ft_isprint	\
		ft_memmove	\
		ft_tolower	\
		ft_bzero	\
		ft_isascii	\
		ft_memccpy	\
		ft_memset	\
		ft_toupper	\
		ft_memchr	\
		ft_memcmp	\
		ft_strlen	\
		ft_strlcpy	\
		ft_strlcat	\
		ft_strchr	\
		ft_strrchr	\
		ft_strnstr	\
		ft_calloc	\
		ft_strdup	\
		ft_substr	\
		ft_strjoin	\
		ft_strtrim	\
		
OBJS=$(addprefix ./, $(addsuffix .o, ${FILES}))
SRCS=$(addprefix ./, $(addsuffix .c, ${FILES}))

NAME = libft.a

all	:	$(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^

# .c.o: 
# 	$(CC) $(CFlAGS) -c $< -o ${<:.c=.o}


re: fclean all

clean:
	$(RM) *.o 

fclean: clean
	$(RM) -f $(NAME)

.PHONY: all clean fclean re