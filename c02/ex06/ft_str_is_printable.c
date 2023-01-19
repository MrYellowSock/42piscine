int	is_printable(char a)
{
	return (a >= 32);
}

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (!is_printable(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
