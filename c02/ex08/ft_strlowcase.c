int	is_upper_alpha(char a)
{
	return (a >= 'A' && a <= 'B');
}

char	*ft_strlowcase(char *str)
{
	char	*i;
	char	diff;

	diff = 'a' - 'A';
	i = str;
	while (*i != 0)
	{
		if (is_upper_alpha(*i))
		{
			*i = *i + diff;
		}
		i++;
	}
	return (str);
}
