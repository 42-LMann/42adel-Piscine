#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	C;

	C = 'a';
	while (C <= 'z')
	{
		write(1, &C, 1);
		C++;
	}
}
