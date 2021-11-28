/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:41:46 by sookang           #+#    #+#             */
/*   Updated: 2021/11/28 15:02:03 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/src/libft.h"

int ft_printf(const char *str, ...);
int ft_parse(char type, va_list *ap);

int ft_print_c_format(char c);
int ft_print_s_format(char *str);
int ft_print_percent_format();
int ft_print_d_format(int i);
#endif
