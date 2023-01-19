int	ft_is_alp(char x)
{
	return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
}

int	is_lower_alpha(char a)
{
	return (a >= 'a' && a <= 'z');
}

int	is_upper_alpha(char a)
{
	return (a >= 'A' && a <= 'Z');
}

char	to_lower(char a)
{
	if (is_upper_alpha(a))
	{
		return (a + ('a' - 'A'));
	}
	else
	{
		return (a);
	}
}

char	to_upper(char a)
{
	if (is_lower_alpha(a))
	{
		return (a - ('a' - 'A'));
	}
	else
	{
		return (a);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*i;

	i = str;
	while (*i != 0)
	{
		if (ft_is_alp(*i) && (i == str || !ft_is_alp(*(i - 1))))
		{
			*i = to_upper(*i);
		}
		else if (ft_is_alp(*i))
		{
			*i = to_lower(*i);
		}
		i++;
	}
	return (str);
}
