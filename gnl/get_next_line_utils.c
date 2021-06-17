#include "get_next_line.h"

unsigned int	ft_strlen(const char *s)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = (unsigned char*)s;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}


char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
