/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:44:37 by sookang           #+#    #+#             */
/*   Updated: 2021/03/09 19:18:56 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*char_to_hex(char c, char *dest)
{
	dest[0] = "0123456789abcdef"[c / 16];
	dest[1] = "0123456789abcdef"[c % 16];
	return (dest);
}

void	get_addr(char *add)
{
	long long	addr;
	int			i;
	char		str[16];

	i = 0;
	addr = (long)add;
	while (i < 16)
	{
		str[15 - i++] = "0123456789abcdef"[addr % 16];
		addr /= 16;
	}
	i = 0;
	while (i < 16)
		write(1, &str[i++], 1);
	write(1, ": ", 2);
}

void	get_hexa(char *arr)
{
	int		i;
	char	dest[2];

	i = -1;
	while (++i < 16)
	{
		write(1, char_to_hex(arr[i], dest), 2);
		if (i % 2)
			write(1, " ", 1);
		if (!arr[i])
			break ;
	}
	while (++i < 16)
	{
		if (i % 2)
			write(1, " ", 1);
		write(1, "  ", 2);
	}
}

void	get_str(char *arr)
{
	int i;

	i = 0;
	while (i < 16 && arr[i])
	{
		if (arr[i] < ' ' || arr[i] > '~')
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, &arr[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*arr;

	arr = (char *)addr;
	i = -1;
	if (size)
	{
		while (arr[++i])
		{
			if (!(i % 16))
			{
				get_addr((char *)&arr[i]);
				get_hexa((char *)&arr[i]);
				get_str((char *)&arr[i]);
			}
		}
	}
	return (0);
}
