

#include "ft_push_swap.h"

long ft_atol(const char *string)
{
	long num = 0;
	char mb = 1;

	while (*string)
	{
		if (num == 0)
		{
			if (*string == '\t' || *string == '+' || *string == ' ')
			{
				string++;
				continue;
			}
			if (*string == '-')
			{
				mb = 0;
				string++;
				continue;
			}
		}
		if (!('0' <= *string && *string <= '9'))
			break;
		num *= 10;
		num += *string - '0';
		string++;
	}
	return mb != 0 ? num : -num;
}

void ft_free(char **str)
{
	char **str_start;

	str_start = str;
	while (*str)
		free(*str++);
	free(str_start);
}

void ft_error()
{
	ft_putstr_fd("Error\n", 1);
}
