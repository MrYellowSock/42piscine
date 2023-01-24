int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	if (nb <= 1)
	{
		return (0);
	}
	return (1);
}
