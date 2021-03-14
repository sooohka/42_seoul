/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: sookang <sookang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:41:42 by sookang           #+#    #+#             */
/*   Updated: 2021/03/11 18:26:27 by sookang          ###   ########.fr       */
=======
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:41:42 by sookang           #+#    #+#             */
/*   Updated: 2021/03/14 00:44:38 by sookang          ###   ########.fr       */
>>>>>>> 60ddec8fbf55379638188245d0b7e846d8c95318
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(int argc, char *argv[])
{
	if (argc)
		ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
