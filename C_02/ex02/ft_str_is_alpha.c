int	ft_str_is_alpha(char *str)
{
	int	val;

	val = 0;
	while (str[val])
	{
		if (str[val] < 65 || (str[val] > 90 && str[val] < 97) || str[val] > 122)
		{
			return (0);
		}
		val++;
	}
	return (1);
	str[val] = '\0';
}
