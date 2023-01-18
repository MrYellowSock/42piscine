int	is_lower_alpha(char a)
{
	return (a >= 'a' && a <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != 0)
	{
		if (!is_lower_alpha(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
