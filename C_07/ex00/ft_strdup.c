//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	long long	len;
	char		*str;

	len = 0;
	str = malloc(sizeof(char) * ft_strlen(src));
	if (str == NULL)
		return (0);
	while (src[len])
	{
		str[len] = src[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}

/*int main (int argc, char *argv[])
{
	int i;
	char *new;
	
	i = 1;
	while (i < argc)
	{
		new = ft_strdup(argv[i]);
		printf("%s", new);
		i++;
	}
	free(new);
	return (0);
}*/
