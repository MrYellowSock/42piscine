unsigned int	abby(int nb)
{
	unsigned int	newnb;

	newnb = 0;
	if (nb < 0)
	{
		nb += 1;
		nb *= -1;
		newnb = (unsigned int)nb + 1;
	}
	else
	{
		newnb = nb;
	}
	return (newnb);
}
