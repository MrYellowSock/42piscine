/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:14:07 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 22:59:45 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

void	m_put_nbr(int nb, int base)
{
	int		s_cur_digit;
	int		s_cur_power;
	char	digit;
	int		max_index;

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
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

void	ft_putnbr(int nb)
{
	m_put_nbr(nb, 10);
}

int	main(void)
{
	ft_putnbr(8004230);
	ft_putnbr(-8004230);
	return (0);
}
