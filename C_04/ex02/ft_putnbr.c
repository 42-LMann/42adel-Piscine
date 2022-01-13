#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_write_nbr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_write_nbr('-');
		nbr = nb * -1;
	}
	else
	{
		nbr = nb;
	}
	if (nbr >= 10)
	{
		ft_putnbr (nbr / 10);
	}
	ft_write_nbr (nbr % 10 + '0');
}
