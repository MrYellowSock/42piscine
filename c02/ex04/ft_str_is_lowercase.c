/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:55:06 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 06:55:07 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower_alpha(char a)
{
	return (a >= 'a' && a <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != 0)
	{
		if (!is_lower_alpha(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
