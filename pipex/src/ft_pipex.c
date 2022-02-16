/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sookang <sookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:02:52 by sookang           #+#    #+#             */
/*   Updated: 2022/02/16 20:30:45 by sookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_parse_cmd(char *cmd, char **env)
{
	char	**path;
	char	**path_start;
	char	*cmd_with_path;

	while (*env)
	{
		if (ft_strncmp(*env, "PATH", 4) == 0)
			path = ft_split(*env + 5, ':');
		env++;
	}
	path_start = path;
	while (*path != NULL)
	{
		cmd_with_path = ft_make_cmd(cmd, *path);
		if (access(cmd_with_path, 0111) == 0)
		{
			ft_free(path_start);
			return (cmd_with_path);
		}
		free(cmd_with_path);
		path++;
	}
	if (*path_start)
		ft_free(path_start);
	return (NULL);
}

void	ft_parent(int pipe_fd[2], int in_file_fd, char *cmd, char **env)
{
	char	**args;
	char	*execute_cmd;

	args = ft_split(cmd, ' ');
	execute_cmd = ft_parse_cmd(args[0], env);
	if (execute_cmd == NULL)
		ft_handle_error("cmd not found");
	close(pipe_fd[0]);
	if ((dup2(in_file_fd, 0) == -1))
		ft_handle_error("inFile dup2 Error");
	if ((dup2(pipe_fd[1], 1) == -1))
		ft_handle_error("pipeFd[1] dup2 Error");
	execv(execute_cmd, args);
	close(in_file_fd);
	close(pipe_fd[1]);
	wait(NULL);
}

void	ft_child(int pipe_fd[2], int out_file_fd, char *cmd, char **env)
{
	char	**args;
	char	*execute_cmd;

	args = ft_split(cmd, ' ');
	execute_cmd = ft_parse_cmd(args[0], env);
	if (execute_cmd == NULL)
		ft_handle_error("cmd not found");
	close(pipe_fd[1]);
	if ((dup2(pipe_fd[0], 0) == -1))
		ft_handle_error("pipeFd[0] dup2 Error");
	if ((dup2(out_file_fd, 1) == -1))
		ft_handle_error("outFile dup2 Error");
	execv(execute_cmd, args);
	close(pipe_fd[0]);
	close(out_file_fd);
}

int	main(int argc, char **argv, char **envp)
{
	int	in_file_fd;
	int	out_file_fd;
	int	pipe_fd[2];
	int	pid;

	in_file_fd = open(argv[1], O_RDONLY);
	out_file_fd = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (argc != 5)
		ft_handle_error("argument error");
	if (in_file_fd == -1)
		ft_handle_error("infile open error");
	if (out_file_fd == -1)
		ft_handle_error("outfile open error");
	if (pipe(pipe_fd) == -1)
		ft_handle_error("pipe error");
	pid = fork();
	if (pid == -1)
		ft_handle_error("fork error");
	if (pid == 0)
		ft_child(pipe_fd, out_file_fd, argv[3], envp);
	else
		ft_parent(pipe_fd, in_file_fd, argv[2], envp);
	return (0);
}
