/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:02:09 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/23 17:02:17 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAP_SIZE 128
#define OUTPUT_BUF 20

// char -> int map
int	fill_map(char *mapping, int size, char *base)
{
	int		i;
	char	value;

	i = 0;
	while (i < size)
	{
		mapping[i] = -1;
		i++;
	}
	value = 0;
	while (*base != 0)
	{
		if (mapping[(unsigned char)*base] >= 0)
		{
			return (0);
		}
		mapping[(unsigned char)*base++] = value++;
	}
	return (value);
}

int	invalid_base(char *mapping, int b)
{
	return (b < 2 || (mapping['-'] >= 0 || mapping['+'] >= 0
			|| mapping[' '] >= 0));
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

char	find_matching_char(char *mapping, int size, char value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (mapping[i] == value)
		{
			return ((char)i);
		}
		i++;
	}
	return (' ');
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			mapping[MAP_SIZE];
	int				base_len;
	unsigned int	value;
	int				c;
	char			output[OUTPUT_BUF];

	c = 0;
	base_len = fill_map(mapping, MAP_SIZE, base);
	if (invalid_base(mapping, base_len))
	{
		return ;
	}
	value = remove_negative(nbr);
	if (nbr < 0)
	{
		write(1, "-", 1);
	}
	while (value > 0 || c == 0)
	{
		output[OUTPUT_BUF - 1 - c++] = find_matching_char(mapping, MAP_SIZE,
				(char)(value % base_len));
		value /= base_len;
	}
	write(1, &output[OUTPUT_BUF - c], c);
}
