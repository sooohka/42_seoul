#include "ft_push_swap.h"

int ft_isnumber(char *str)
{
	int i = 0;

	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (-1);
		i++;
	}
	return (1);
}

char *ft_cutzero(char *str)
{
	int i = 0;

	while (str[i] == '0')
	{
		if (i == (int) (ft_strlen(str) - 1))
			break;
		i++;
	}
	return str + i;
}

char **ft_parse_args(int argc, char **argv)
{
	char    **args;
	char    **args_start;
	int       len;
	long long temp_number;

	args = (char **) malloc(argc * sizeof(char *));
	args_start = args;
	while (*argv)
	{
		*argv = ft_cutzero(*argv);
		len = ft_strlen(*argv);
		if (len > 11)
		{
			ft_free(args_start);
			return (NULL);
		}
		else if (len == 11 && ft_strncmp(*argv, "-", 1) != 0 && ft_strncmp(*argv, "+", 1) != 0)
		{
			ft_free(args_start);
			return (NULL);
		}
		else if (ft_isnumber(*argv) == -1)
		{
			ft_free(args_start);
			return (NULL);
		}
		temp_number = ft_atol(*argv);
		if (temp_number > INT32_MAX || temp_number < INT32_MIN)
		{
			ft_free(args_start);
			return (NULL);
		}
		*args++ = ft_strdup(*argv++);
	}
	return args_start;
}
