/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:55:12 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 06:55:13 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper_alpha(char a)
{
	return (a >= 'A' && a <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if (!is_upper_alpha(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
