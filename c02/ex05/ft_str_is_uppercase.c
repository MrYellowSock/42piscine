int	is_upper_alpha(char a)
{
	return (a >= 'A' && a <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if (!is_upper_alpha(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
