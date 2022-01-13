#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_writechar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		ft_writechar('-');
		number = nb * -1;
	}
	else
	{
		number = nb;
	}
	if (number >= 10)
	{
		ft_putnbr (number / 10);
	}
	ft_writechar(number % 10 + '0');
}	
