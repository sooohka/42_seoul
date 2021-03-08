
#include <stdio.h>
#include <string.h>

int main()
{
	char src[12] = "good morning"; // 12
	char dst[10] = "hello";        // 5

	// printf("%d\n", strlcat(dst, src, 7));
	printf("%s\n", dst);
	printf("%d\n", ft_strlcat(dst, src, 7));
	printf("%s\n", dst);
}