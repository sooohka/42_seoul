/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:13:30 by sookang           #+#    #+#             */
/*   Updated: 2021/03/11 15:57:14 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_negative(char c)
{
	return (c == '-' ? 1 : 0);
}

int		is_number(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int		check(char *base)
{
	int i;
	int len;

	len = my_strlen(base);
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == base[i + 1])
			return (0);
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
			return (0);
		i++;
	}
	return (len);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int len;
	int neg_flag;

	i = 0;
	len = check(base);
	if (!len)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == ' ' || str[i] == '\n'\
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f'\
		|| str[i] == '\r')
			continue ;
		i++;
	}
	return (0);
}
