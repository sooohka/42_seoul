/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:19:19 by sookang           #+#    #+#             */
/*   Updated: 2021/05/12 17:35:39 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <_types.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
unsigned int	ft_strlen(const char *s);
void			*ft_bzero(void *s, unsigned int len);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *restrict dst, const void *restrict src,\
				int c, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
void			*ft_memcpy(void *restrict dst, const void *restrict src,\
				unsigned int n);
void			*ft_memmove(void *dst, const void *src, unsigned int len);
void			*ft_memset(void *b, int c, unsigned int len);
char			*ft_strchr(const char *s, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(const char *s);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle,\
				unsigned int len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);

#endif
