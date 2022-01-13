#include <unistd.h>

void	ft_print_comb2(void);

void	ft_write_number(char a, char b, char c, char d);

void	ft_set_number(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_set_number(a, b, c, d);
}

void	ft_write_number(char w, char x, char y, char z)
{
	if ((y > w) || (:wq
	{
		write(1, &w, 1);
		write(1, &x, 1);
		write(1, " ", 1);
		write(1, &y, 1);
		write(1, &z, 1);
		if ((w < '9') || (x < '8') || (y < '9') || (z < '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_write_number(char l, char m, char n, char o);

void	ft_set_number(char l, char m, char n, char o);

void	ft_set_number(char l, char m, char n, char o)
{
	while (l <= '9' && m <= '8')
	{
		while (m <= '9')
		{
			while (n <= '9')
			{			
				while (o <= '9')
				{
					ft_write_number(l, m, n, o);
					o++;
				}
				o = '0';
				n++;
			}
			o = m + 1;
			o++;
			n = l;
			m++;
		}
		m = '0';
		l++;
		o = l;
		n = l;
	}
}

int	main()
{
	ft_print_comb2();
	return (0);
}
