int	ft_str_is_printable(char *str)
{
	int	val;

	val = 0;
	while (str[val])
	{
		if (str[val] < 32 || str[val] > 126)
		{
			return (0);
		}
		val++;
	}
	return (1);
	str[val] = '\0';
}
