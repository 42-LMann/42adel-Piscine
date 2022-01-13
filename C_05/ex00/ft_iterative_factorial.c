int	ft_iterative_factorial(int nb)
{
	int	x;
	int	product;

	x = 1;
	product = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (x <= nb)
	{
		product *= x;
		x++;
	}
	return (product);
}
