int	ft_str_is_numeric(char *str)
{
	int	val;

	val = 0;
	while (str[val])
	{
		if (str[val] < 48 || str[val] > 57)
		{
			return (0);
		}
		val++;
	}
	return (1);
	str[val] = '\0';
}
