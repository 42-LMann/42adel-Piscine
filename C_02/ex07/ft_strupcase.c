char	*ft_strupcase(char *str)
{
	int	val;

	val = 0;
	while (str[val])
	{
		if (str[val] > 96 && str[val] < 123)
		{
			(str[val] -= 32);
		}
		val++;
	}
	return (str);
	str[val] = '\0';
}
