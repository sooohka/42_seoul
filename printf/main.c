#include "./src/ft_printf.h"
#include <stdio.h>
int main()
{
	int       imin = -2147483648;
	int       imax = 2147483647;
	long long lmin = -9223372036854775807;
	long long lmax = 9223372036854775807;

	printf("%d\n", ft_printf("%u\n", imax + imax));
	printf("%d\n", printf("%u\n", imax + imax));
	return 0;
}