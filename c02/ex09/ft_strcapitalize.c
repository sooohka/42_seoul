/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:42:38 by sookang           #+#    #+#             */
/*   Updated: 2021/03/08 05:30:51 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_special(char c)
{
	int	i;

	i = -1;
	if (!(c >= ' ' && c <= '~'))
		return (0);
	if (c >= '0' && c <= '9')
		return (0);
	if (is_lower(c) || is_upper(c))
		return (0);
	return (1);
}

int		my_stren(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < my_stren(str))
	{
		if (is_special(str[i]) || !str[i])
		{
			if (is_lower(str[j]))
				str[j] = str[j] - 32;
			while (j <= i)
			{
				j++;
				if (is_upper(str[j]))
					str[j] = str[j] + 32;
			}
		}
		i++;
	}
	str[i]='\0'; 
	return (str);
}
