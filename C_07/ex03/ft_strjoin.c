#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*final_str;

	j = 0;
	n = 0;
	final_str = (char *)malloc(sizeof(strs));
	if (final_str == NULL)
	{
		return (0);
	}
	while (n < size)
	{
		i = 0;
		while (strs[n][i])
			final_str[j++] = strs[n][i++];
		i = 0;
		while (sep[i] && n != size - 1)
			final_str[j++] = sep[i++];
		n++;
	}
	final_str[j] = '\0';
	return (final_str);
}
/*
int main()
{
	char	*tab[4];

	tab[0] = "eat";
	tab[1] = "sleep";
	tab[2] = "code";
	tab[3] = "repeat";
	printf("%s", ft_strjoin(4, tab, "___"));
	return (0);
}*/
