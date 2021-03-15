
int ft_find_next_prime(int nb);
#include <stdio.h>
#include<limits.h>
int main()
{
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(12));
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(1112312312));
	printf("%d\n", ft_find_next_prime(1415132322));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(INT_MAX));
	printf("%d\n", ft_find_next_prime(INT_MIN));

}
