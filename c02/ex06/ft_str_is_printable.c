/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:55:17 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 06:55:18 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char a)
{
	return (a >= 32);
}

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (!is_printable(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
