int	ft_str_is_lowercase(char *str)
{
	int	val;

	val = 0;
	while (str[val])
	{
		if (str[val] < 97 || str[val] > 122)
		{
			return (0);
		}
		val++;
	}
	return (1);
	str[val] = '\0';
}
