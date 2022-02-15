#include "ft_pipex.h"
#include <stdio.h>
#include <unistd.h>

char *ft_parse_cmd(char *cmd, char **env)
{
	char **path;
	char *cmdWithPath;
	char **pathStart;

	while (*env)
	{
		if (ft_strncmp(*env, "PATH", 4) == 0)
		{
			path = ft_split(*env + 5, ':');
			pathStart=path;
			break;
		}
		env++;
	}
	while (*path != NULL)
	{
		cmdWithPath = ft_strjoin(*path, ft_strjoin("/", cmd));
		if (access(cmdWithPath, 0111) == 0)
		{
			ft_free(path);
			return cmdWithPath;
		}
		free(cmdWithPath);
		path++;
	}
	if(*pathStart)
		ft_free(pathStart);
	return NULL;
}

void ft_parent(int pipeFd[2], int inFileFd, char *cmd, char **env)
{
	char **args;
	char  *executeCmd;

	args = ft_split(cmd, ' ');
	if ((executeCmd = ft_parse_cmd(args[0], env)) == NULL)
		ft_handle_error("cmd1 error");
	close(pipeFd[0]);
	if ((dup2(inFileFd, 0) == -1))
		ft_handle_error("inFile dup2 Error");
	if ((dup2(pipeFd[1], 1) == -1))
		ft_handle_error("pipeFd[1] dup2 Error");
	execv(executeCmd, args);
	close(inFileFd);
	close(pipeFd[1]);
	wait(NULL);
}

void ft_child(int pipeFd[2], int outFileFd, char *cmd, char **env)
{
	char **args;
	char  *executeCmd;

	args = ft_split(cmd, ' ');
	if ((executeCmd = ft_parse_cmd(args[0], env)) == NULL)
		ft_handle_error("cmd2 error");
	close(pipeFd[1]);
	if ((dup2(pipeFd[0], 0) == -1))
		ft_handle_error("pipeFd[0] dup2 Error");
	if ((dup2(outFileFd, 1) == -1))
		ft_handle_error("outFile dup2 Error");
	execv(executeCmd, args);
	close(pipeFd[0]);
	close(outFileFd);
}

int main(int argc, char **argv, char **envp)
{
	int inFileFd;
	int outFileFd;
	int pipeFd[2];
	int pid;

	char *sds = ft_parse_cmd("cat", envp);

	if (argc != 5)
		ft_handle_error("argument error");
	if ((inFileFd = open(argv[1], O_RDONLY)) == -1)
		ft_handle_error("infile open error");
	if ((outFileFd = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777)) == -1)
		ft_handle_error("outfile open error");
	if (pipe(pipeFd) == -1)
		ft_handle_error("pipe error");
	if ((pid = fork()) == -1)
		ft_handle_error("fork error");
	if (pid == 0)
		ft_child(pipeFd, outFileFd, argv[3], envp);
	else
		ft_parent(pipeFd, inFileFd, argv[2], envp);
	return 0;
}
