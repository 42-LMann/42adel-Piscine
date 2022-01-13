int	ft_sqrt(int nb)
{
	long	x;

	x = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb < 0)
		return (0);
	while (x * x <= (long)nb)
	{
		if (x * x == nb)
		{
			return (x);
		}
		x++;
	}
	return (0);
}
