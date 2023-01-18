int	is_lower_alpha(char a)
{
	return (a >= 'a' && a <= 'z');
}

char	*ft_strupcase(char *str)
{
	char	*i;
	char	diff;

	diff = 'A' - 'a';
	i = str;
	while (*i != 0)
	{
		if (is_lower_alpha(*i))
		{
			*i = *i + diff;
		}
		i++;
	}
	return (str);
}
