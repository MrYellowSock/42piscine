/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:24:06 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/02 19:24:07 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	invalid_base(char *mapping, int b)
{
	return (b < 2 || (mapping['-'] >= 0 || mapping['+'] >= 0
			|| mapping[' '] >= 0));
}

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
	if (invalid_base(mapping, value))
	{
		return (0);
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

char	*skip_space(char *str)
{
	while (*str != 0 && (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' '))
	{
		str++;
	}
	return (str);
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
