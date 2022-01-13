#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;

	start = 0;
	while (start != "\0")
	{
		temp = tab[start];
		tab[start] = tab[size/2];
		tab[size/2] = temp;
		start++;
	}
}

int main(void)
{
	int *tab;
	tab[0] = 1;
	tab[1] = 2; 
	tab[2] = 4;
	tab[3] = 7; 
	tab[4] = 5;
	tab[5] = 9;
	int size = 7;
	printf("%d", ft_rev_int_tab(tab, size));
	return (0);
}
