int main(int argc, char *argv[])
{
	int i;

	i = argc;
	while (--i > 0)
	{
		ft_str(argv[i]);
		write(1, "\n", 1);
	}
}