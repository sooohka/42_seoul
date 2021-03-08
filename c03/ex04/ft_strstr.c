/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:52:58 by sookang           #+#    #+#             */
/*   Updated: 2021/02/28 21:40:06 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (str[++i])
	{
		while (to_find[++j])
		{
			if ((str[i + j] != to_find[j]) && str[i + j])
				return ("\0");
		}
	}
	return (&str[i + j]);
}
