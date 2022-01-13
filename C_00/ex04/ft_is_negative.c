#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int	n)
{
	char	test;

	if (n < 0)
	{
		test = 'N';
	}
	else
	{
		test = 'P';
	}
	write(1, &test, 1);
}

int main()
{
	ft_is_negative('p');
	return (0);
}
