#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	C;

	C = 'z';
	while (C >= 'a')
	{
		write(1, &C, 1);
		C--;
	}
}
