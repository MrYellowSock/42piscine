#include "./mynum.h"
#include "unistd.h"

int	m_str_len(char *str)
{
	int		count;
	char	*start;

	count = 0;
	start = str;
	while (*start != 0)
	{
		count += 1;
		start++;
	}
	return (count);
}

int	m_make_pos(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		return (1);
	}
	return (0);
}

void	zero_pad(int nb, int base, int padto)
{
	int	pad;

	pad = padto - m_digitlen(nb, base) - 1;
	while (pad > 0)
	{
		write(1, "0", 1);
		pad--;
	}
}

void	m_put_nbr(int nb, int base, int padto)
{
	int		s_cur_digit;
	int		s_cur_power;
	char	digit;
	int		max_index;

	if (m_make_pos(nb))
	{
		write(1, "-", 1);
	}
	zero_pad(nb, base, padto);
	max_index = m_digitlen(nb, base);
	while (max_index >= 0)
	{
		s_cur_power = m_power(base, max_index);
		s_cur_digit = nb / s_cur_power;
		digit = '0' + s_cur_digit;
		write(1, &digit, 1);
		nb = nb - s_cur_power * s_cur_digit;
		max_index = max_index - 1;
	}
}
