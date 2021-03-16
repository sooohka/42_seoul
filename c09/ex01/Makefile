CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=$(wildcard ./srcs/*.c)
INC=./includes/
ALL=ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
all: libft.a


ft_putchar.o: 
	$(CC) $(CFLAGS) -c -o ./srcs/ft_putchar.o ./srcs/ft_putchar.c 

ft_swap.o: 
	$(CC) $(CFLAGS) -c -o ./srcs/ft_swap.o ./srcs/ft_swap.c

ft_putstr.o: 
	$(CC) $(CFLAGS) -c -o ./srcs/ft_putchar.o ./srcs/ft_putstr.c

ft_strlen.o: 
	$(CC) $(CFLAGS) -c -o ./srcs/ft_strlen.o ./srcs/ft_strlen.c

ft_strcmp.o: 
	$(CC) $(CFLAGS) -c -o ./srcs/ft_strcmp.o ./srcs/ft_strcmp.c

libft.a: $(ALL)
	ar rc libft.a  ./srcs/*.o

clean:
	rm */*.o

fclean: clean
	rm -f libft.a

re: fclean all
