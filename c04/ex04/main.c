#include <stdio.h>
int main(void)
{
	ft_putnbr_base(30, "01-");
	printf("\n");
	ft_putnbr_base(30, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-30, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(30, "01");
	printf("\n");
	ft_putnbr_base(-30, "01");
	printf("\n");
	ft_putnbr_base(30, "01");
	return (0);
}