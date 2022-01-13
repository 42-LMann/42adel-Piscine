#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		write(1, &str[length], 1);
		length++;
	}
}
