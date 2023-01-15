void	m_put_nbr(int nb, int base, int padto)
{
	int	max_index;
	int pad;
	int	s_cur_digit;
	int	s_cur_power;

	max_index = nb_digitlen(nb, base);
	pad = padto - max_index;

	while(pad > 0)
	{
		m_put_str("0");
		pad--;
	}
	while (max_index >= 0)
	{
		s_cur_power = power(base, max_index);
		s_cur_digit = nb / s_cur_power;
		ft_putdigit(s_cur_digit);
		nb = nb - s_cur_power * s_cur_digit;
		max_index = max_index - 1;
	}
}

void	m_put_str(char * str)
{
	write(1,str,m_str_len(str));
}

int m_str_len(char * str)
{
	int count = 0;
	char * start = str;
	while (*start != 0)
	{
		count += 1;
		start++;
	}
	return count;
}
