int ft_iterative_power(int nb, int power)
{
	//TODO : invalid arg check?
	int result = 1;
	while(power > 0)
	{
		result *= nb;
		power--;
	}
	return result;
}
