int	is_number(char a)
{
	return (a >= '0' && a <= '9');
}

int	ft_str_is_numeric(char *str)
{
	while (*str != 0)
	{
		if (!is_number(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
