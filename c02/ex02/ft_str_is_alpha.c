/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:54:51 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 06:59:59 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alp(char x)
{
	return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if (!ft_is_alp(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
