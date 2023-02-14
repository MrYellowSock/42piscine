/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:56:30 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/14 13:52:28 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char a)
{
	return (a >= 32);
}

char	tobase16(int n)
{
	char	res;

	res = n + '0';
	if (res > '9')
	{
		res += 'a' - ':';
	}
	return (res);
}

void	show_hex(char a)
{
	char	buf[2];

	buf[0] = tobase16(a / 16);
	buf[1] = tobase16(a % 16);
	write(1, buf, 2);
}

// BAD do not use.
void	ft_putstr_non_printable(char *str)
{
	while (*str != 0)
	{
		if (is_printable(*str))
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			show_hex(*str);
		}
		str++;
	}
}
