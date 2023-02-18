#include "libft.h"

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

int	m_digitlen(unsigned int nb, unsigned int base)
{
	int	max_power;

	max_power = 0;
	while (nb / m_power(base, max_power) >= base)
	{
		max_power = max_power + 1;
	}
	return (max_power);
}

unsigned int	remove_negative(int nb)
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

void	ft_putnbr(int input)
{
	int				s_cur_digit;
	int				s_cur_power;
	char			digit;
	int				max_index;
	unsigned int	nb;

	nb = remove_negative(input);
	max_index = m_digitlen(nb, 10);
	if (input < 0)
	{
		write(1, "-", 1);
	}
	while (max_index >= 0)
	{
		s_cur_power = m_power(10, max_index);
		s_cur_digit = nb / s_cur_power;
		digit = '0' + s_cur_digit;
		write(1, &digit, 1);
		nb = nb - s_cur_power * s_cur_digit;
		max_index = max_index - 1;
	}
}
