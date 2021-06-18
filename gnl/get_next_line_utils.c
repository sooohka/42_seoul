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


char			*ft_strdup(const char *s1)
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

char			*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *c1;
	char *c2;
	char *ans;

	c1 = (char *)s1;
	c2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	ans = str;
	while (*c1)
		*str++ = *c1++;
	while (*c2)
		*str++ = *c2++;
	*str = 0;
	return (ans);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!src)
		return (0);
	len = ft_strlen(src);
	if (!size)
		return (len);
	while ((i + 1 < size) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (len);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (src_len + dest_len);
}
