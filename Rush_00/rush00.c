extern	void	ft_putchar(char c);

void	check_char(int x, int y, int i, int j)
{
	if (i > 0 && i < x - 1 && j > 0 && j < y - 1)
		ft_putchar(' ');
	else if ((i == 0 && j == 0) || (i == x - 1 && j == 0 && x > 1))
		ft_putchar('o');
	else if (i == 0 && j == y - 1 && y > 1)
		ft_putchar('o');
	else if (i == x - 1 && j == y - 1 && x > 1 && y > 1)
		ft_putchar('o');
	else if (j == 0 || j == y - 1)
		ft_putchar('-');
	else
		ft_putchar('|');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			check_char(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
