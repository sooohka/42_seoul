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
	rm -rf gnlTester/ 42TESTERS-GNL/ gnlkiller/ 42cursus_gnl_tests/ gnl-war-machine-v2019/ GNL_lover a.out.dSYM
		
.PHONY: all clean fclean re bonus
