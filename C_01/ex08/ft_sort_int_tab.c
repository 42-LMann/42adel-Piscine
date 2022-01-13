void	ft_sort_int_tab(int *tab, int size)
{
	int	mov;
	int	i;
	int	i2;

	i = 0;
	while (i < size -1 )
	{
		i2 = 0;
		while (i2 < size - 1)
		{
			if (tab[i2 + 1] < tab[i2])
			{
				mov = tab[i2 + 1];
				tab[i2 + 1] = tab[i2];
				tab[i2] = mov;
			}
		i2++;
		}
	i++;
	}
}
