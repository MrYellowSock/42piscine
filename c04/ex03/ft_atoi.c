/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:01:58 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/23 17:01:59 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char a)
{
	return (a >= '0' && a <= '9');
}

char	*eon(char *str)
{
	if (is_number(*str))
	{
		return (eon(str + 1));
	}
	else
	{
		return (str - 1);
	}
}

int	ft_atoi(char *str)
{
	char	*endofnum;
	int		pow;
	int		sum;

	sum = 0;
	if (*str == '-')
	{
		pow = -1;
		str++;
	}
	else
	{
		pow = 1;
	}
	endofnum = eon(str);
	while (endofnum >= str)
	{
		sum += pow * (*endofnum - '0');
		endofnum--;
		pow *= 10;
	}
	return (sum);
}
