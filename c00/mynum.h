int	m_is_uniq(int n, int length)
{
	int counter[10] = {0,0,0,0,0,0,0,0,0,0};
	while (length > 0)
	{
		int lastDigit = n % 10;
		n = n / 10;
		if (counter[lastDigit] > 0)
		{
			return 0;
		}
		else{
			counter[lastDigit] = 1;
		}
		length--;
	}
	return 1;
}

int	m_power(int base, int pow)
{
	int	s_c;
	int	s_accumulate;

	s_accumulate = 1;
	s_c = 0;
	while (s_c < pow)
	{
		s_accumulate *= base;
		s_c = s_c + 1;
	}
	return (s_accumulate);
}

int	m_digitlen(int nb, int base)
{
	int	max_power;

	max_power = 0;
	while (nb / power(base, max_power) >= base)
	{
		max_power = max_power + 1;
	}
	return (max_power);
}
