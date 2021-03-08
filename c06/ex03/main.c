int		main(int argc, char *argv[])
{
	int i;

	i = 1;

	sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
