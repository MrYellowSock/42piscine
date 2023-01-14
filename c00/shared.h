/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:23:31 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/13 19:55:55 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	power(int base, int pow)
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

void	ft_putdigit(int nbdigit)
{
	char	converted;

	converted = '0' + nbdigit;
	write(1, &converted, 1);
}

int	nb_digitlen(int nb, int base)
{
	int	max_power;

	max_power = 0;
	while (nb / power(base, max_power) >= base)
	{
		max_power = max_power + 1;
	}
	return (max_power);
}

void	ft_putnbr_base(int nb, int base)
{
	int	max_power;
	int	s_cur_digit;
	int	s_cur_power;

	max_power = nb_digitlen(nb, base);
	while (max_power >= 0)
	{
		s_cur_power = power(base, max_power);
		s_cur_digit = nb / s_cur_power;
		ft_putdigit(s_cur_digit);
		nb = nb - s_cur_power * s_cur_digit;
		max_power = max_power - 1;
	}
}
