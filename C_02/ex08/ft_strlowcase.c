char	*ft_strlowcase(char *str)
{
	int	val;

	val = 0;
	while (str[val])
	{
		if ((str[val]) > 64 && (str[val]) < 91)
		{
			(str[val] += 32);
		}
		val++;
	}
	return (str);
	(str[val]) = '\0';
}
