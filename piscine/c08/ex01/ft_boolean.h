/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:13:28 by sookang           #+#    #+#             */
/*   Updated: 2021/03/16 11:35:17 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef	int	t_bool;

# define TRUE 1
# define FALSE 0
# define EVEN(x) (x % 2 == 0 ? TRUE : FALSE)
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
#endif
