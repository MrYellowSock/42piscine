/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:09:17 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/17 11:09:47 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	m_ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		m_ft_putchar('N');
	}
	else
	{
		m_ft_putchar('P');
	}
}
