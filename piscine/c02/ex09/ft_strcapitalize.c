/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:42:38 by sookang           #+#    #+#             */
/*   Updated: 2021/03/09 19:17:29 by sookang          ###   ########.fr       */
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

int		is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_alphanumeric(char c)
{
	int i;

	i = -1;
	if (is_lower(c) || is_upper(c) || is_number(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (!is_alphanumeric(str[i - 1]) && is_lower(str[i]))
			str[i] -= 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
