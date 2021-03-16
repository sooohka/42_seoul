#include <stdlib.h>


typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;


struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);
int main(void)
{
	struct s_stock_str *test;
	char **             strs;
	strs = (char **)malloc(sizeof(char *) * 6 + 1);

	strs[0] = "hello";
	strs[1] = "012345678901234567890123";
	strs[2] = "hello";
	strs[3] = "012345678901234567890123";
	strs[4] = "hello";
	strs[5]=0;
	test = ft_strs_to_tab(6, strs);
	//	free(strs);
	//	free(strs[0]);
	//	free(strs[1]);
	ft_show_tab(test);
}