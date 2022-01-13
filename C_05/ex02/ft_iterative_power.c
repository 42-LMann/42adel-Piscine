int	ft_iterative_power(int nb, int power)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (y <= power)
	{
		x *= nb;
		y++;
	}
	return (x);
}
