#include "./src/ft_printf.h"
#include <stdio.h>
int main()
{
	int       imin = -2147483648;
	int       imax = 2147483647;
	long long lmin = -9223372036854775808;
	long long lmax = 9223372036854775807;

	printf("%d\n", printf("%d\n", ));
	printf("%d\n", ft_printf("%d\n", ));
	return 0;
}