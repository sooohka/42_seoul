CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM= rm -rf
NAME=get_next_line
SRCS=	get_next_line.c\
		get_next_line_utils.c\

all:$(NAME)

$(NAME):$(SRCS) main.c
		$(CC) $(CFLAGS) $^ -o $(NAME)
clean:
	$(RM) $(NAME)
		
.PHONY: all clean fclean re bonus
