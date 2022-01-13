#include <unistd.h>

void	ft_print_combn(int n);

void	printchar(char *c, int n);
void	digit_value(char *c, int n);
void	other_digit(char *c, int n);

void	ft_print_combn(int n)
{
	int	x;

	char	c[10];

	x = 0;
	while (x < 10)
	{
		c[x] = x + '0';
		x++;
	}
	digit_value(c, n);
}

void	didit_value(char *c, int n)
{
	int	x;

	x = n - 1;
	if (c[x] < '9' && n > 0)
	{
		printchar(c, n);
		write(1, ", ", 2);
		c[x] = c[x] + 1;
		digit_value(c, n);
	}
	else if (c[x] - c[0] > n - 1 && c[x] <= '9')
	{
		printchar(c, n);
		write(1, ", ", 2);
		other_digit(c, n);
	}
	else
	{
		printchar(c, n);
	}
}

void	other_digit(char *c, int n)
{
	int	x;
	int	y;

	x = n - 1;
	y = 0;
	while ((c[x - y - 1] + 1 == c[x - y]) && x - y > 0)
	{
		y++;
	}
	c[x - y - 1] = c[x - y - 1] + 1;
	while (y >= 0)
	{
		c[x - y] = c[x - y - 1] + 1;
		y--;
	}
	digit_value(c, n);
}	

void	printchar(char *c, int n)
{
	write(1, &*c, n);
}

int	main(void)
{
	ft_print_combn(1);
}
