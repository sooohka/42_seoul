/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:13:30 by sookang           #+#    #+#             */
/*   Updated: 2021/03/09 23:57:23 by sookang          ###   ########.fr       */
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

int		check(char *base)
{
	int		i;
	int		len;

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
	int		i;
	int		len;
	char	inted[100];

	len = check(base);
	if (!len)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (len);
}
