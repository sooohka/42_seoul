#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *       ft_strdup(const char *s1);
unsigned int ft_strlen(const char *s);
char *       ft_strjoin(char *s1, char const *s2);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int get_next_line(int fd, char **line);
#define OPEN_MAX 256