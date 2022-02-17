/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:27:58 by sookang           #+#    #+#             */
/*   Updated: 2022/02/17 18:15:44 by sooho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>


int ft_isnumber(char *str)
{
	int i = 0;

	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (-1);
		i++;
	}
	return (1);
}


char *ft_cutzero(char *str)
{
	int i = 0;

	while (str[i] == '0')
	{
		if (i == (int)(ft_strlen(str)-1))
			break;
		i++;
	}
	return str + i;
}

char **ft_parse_args(int argc, char **argv)
{
	char    **args;
	char    **args_start;
	int       len;
	long long temp;

	/* OK 1. 길이가 11을 초과하는지 검사
	 * OK 2. 길이가 11일때 앞에부호가 음수인지 검사
	 * OK 3. 숫자만 들어있는지 검사
	 * OK 4. int범위 초과하는지 검사
	 */
	args = (char **) malloc(argc * sizeof(char *));
	args_start = args;
	while (*argv)
	{
		*argv = ft_cutzero(*argv);
		len = ft_strlen(*argv);
		if (len > 11)
		{
			ft_free(args_start);
			return (NULL);
		}
		else if (len == 11 && (ft_strncmp(*argv, "-", 1) != 0))
		{
			ft_free(args_start);
			return (NULL);
		}
		else if (ft_isnumber(*argv) == -1)
		{
			ft_free(args_start);
			return (NULL);
		}
		temp = ft_atol(*argv);
		if (temp > INT32_MAX || temp < INT32_MIN)
		{
			ft_free(args_start);
			return (NULL);
		}
		*args++ = ft_strdup(*argv++);
	}
	return args_start;
}

int main(int argc, char **argv)
{
	char **args;
	if (argc == 1)
		return (0);

	args = ft_parse_args(argc, ++argv);
	if (!args)
		ft_error();



	ft_free(args);
	while (*args)
	{
		ft_putstr_fd(*args, 1);
		ft_putstr_fd("\n", 1);
		args++;
	}

}
