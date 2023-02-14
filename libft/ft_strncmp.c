int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff;

	if (n <= 0)
	{
		return (0);
	}
	diff = *s1 - *s2;
	if (*s1 == 0 || *s2 == 0 || diff != 0 || n <= 1)
	{
		return (diff);
	}
	else
	{
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	}
}
