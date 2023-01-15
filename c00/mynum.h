int	m_is_uniq(int n, int length)
{
	int	counter[10];
	int	previous_rightmost;
	int	right_most;

	counter[0] = 0;
	counter[1] = 0;
	counter[2] = 0;
	counter[3] = 0;
	counter[4] = 0;
	counter[5] = 0;
	counter[6] = 0;
	counter[7] = 0;
	counter[8] = 0;
	counter[9] = 0;
	previous_rightmost = 9;
	while (length > 0)
	{
		right_most = n % 10;
		n = n / 10;
		if (counter[right_most] > 0 || right_most > previous_rightmost)
		{
			return (0);
		}
		else
		{
			counter[right_most] = 1;
		}
		previous_rightmost = right_most;
		length--;
	}
	return (1);
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
	while (nb / m_power(base, max_power) >= base)
	{
		max_power = max_power + 1;
	}
	return (max_power);
}
