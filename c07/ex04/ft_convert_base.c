/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:24:12 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/02 19:24:27 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define MAP_SIZE 128
#define OBUF 128

int				invalid_base(char *mapping, int b);
int				fill_map(char *mapping, int size, char *base);
char			*eon(char *str, char *mapping);
char			*skip_space(char *str);
char			find_matching_char(char *mapping, int size, char value);

int	ft_atoi_base(char *str, char *mapping, int base_len)
{
	int		pow;
	int		sum;
	char	*endofnum;

	sum = 0;
	pow = 1;
	str = skip_space(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			pow *= -1;
		}
		str++;
	}
	endofnum = eon(str, mapping);
	while (endofnum >= str)
	{
		sum += pow * mapping[(unsigned char)*endofnum--];
		pow *= base_len;
	}
	return (sum);
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

char	*ft_putnbr_base(int nbr, char *mapping, int base_len)
{
	unsigned int	value;
	int				c;
	char			*output;

	output = malloc(OBUF * sizeof(char));
	output[OBUF - 1] = 0;
	c = 1;
	value = remove_negative(nbr);
	while (value > 0 || c == 0)
	{
		output[OBUF - 1 - c++] = find_matching_char(mapping, MAP_SIZE,
				(char)(value % base_len));
		value /= base_len;
	}
	if (nbr < 0)
	{
		output[OBUF - 1 - c++] = '-';
	}
	return (&output[OBUF - c]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		blah;
	char	mapping[MAP_SIZE];
	int		base_len;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	base_len = fill_map(mapping, MAP_SIZE, base_from);
	if (!base_len)
		return (NULL);
	blah = ft_atoi_base(nbr, mapping, base_len);
	base_len = fill_map(mapping, MAP_SIZE, base_to);
	if (!base_len)
		return (NULL);
	return (ft_putnbr_base(blah, mapping, base_len));
}
