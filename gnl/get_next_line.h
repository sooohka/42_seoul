#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFER_SIZE 1024
char	*ft_strdup(const char *s1);
unsigned int	ft_strlen(const char *s);

int get_next_line(int fd, char **line);