/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:02:15 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/01 13:14:53 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAP_SIZE 128

// return base
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

char	*eon(char *str, char *mapping)
{
	if (mapping[(unsigned char)*str] >= 0)
	{
		return (eon(str + 1, mapping));
	}
	else
	{
		return (str - 1);
	}
}

int	invalid_base(char *mapping, int b)
{
	return (b < 2 || (mapping['-'] >= 0 || mapping['+'] >= 0
			|| mapping[' '] >= 0));
}

int	is_space(char x)
{
	return (x == '\t' || x == '\n' || x == '\v' || x == '\f' || x == '\r'
		|| x == ' ');
}

char	*skip_space(char *str)
{
	while (*str != 0 && is_space(*str))
	{
		str++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	char	mapping[MAP_SIZE];
	int		pow;
	int		sum;
	int		base_len;
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
	base_len = fill_map(mapping, MAP_SIZE, base);
	if (invalid_base(mapping, base_len))
	{
		return (0);
	}
	endofnum = eon(str, mapping);
	while (endofnum >= str)
	{
		sum += pow * mapping[(unsigned char)*endofnum--];
		pow *= base_len;
	}
	return (sum);
}
