/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:45:10 by sookang           #+#    #+#             */
/*   Updated: 2022/02/14 18:38:22 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int inFileFd;
	int outFileFd;
	int pipeFd[2];

	if (argc != 5)
		ft_handle_error("argument error", 1);
	if ((inFileFd = open(argv[1], O_RDONLY)) == -1)
		ft_handle_error("infile open error", 1);
	if ((outFileFd = open(argv[4], O_WRONLY | O_CREAT| O_TRUNC, 0777)) == -1)
		ft_handle_error("outfile open error", 1);
	if (pipe(pipeFd) == -1)
		ft_handle_error("pipe error", 1);
	return 0;
}
