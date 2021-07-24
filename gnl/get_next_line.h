/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:26:21 by sookang           #+#    #+#             */
/*   Updated: 2021/07/24 19:47:33 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define OPEN_MAX 256
# include <stdlib.h>
# include <unistd.h>

char			*ft_strdup(const char *s1);
unsigned int	ft_strlen(const char *s);
char			*ft_strjoin(char *s1, char const *s2);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char*				get_next_line(int fd);

#endif
