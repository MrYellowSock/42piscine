/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:54:59 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 06:55:01 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char a)
{
	return (a >= '0' && a <= '9');
}

int	ft_str_is_numeric(char *str)
{
	while (*str != 0)
	{
		if (!is_number(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
