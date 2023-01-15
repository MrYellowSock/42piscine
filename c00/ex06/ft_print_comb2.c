/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:11:29 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 07:50:02 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../myio.h"

void	my_comb(int maxval, int digit)
{
	int	left;
	int	right;

	left = 0;
	while (left <= maxval)
	{
		right = left + 1;
		while (right <= maxval)
		{
			if(left > 0  || right > 1)
			{
				write(1, ", ", 2);
			}
			m_put_nbr(left, 10, 2);
			write(1, " ", 1);
			m_put_nbr(right, 10, 2);
			right = right + 1;
		}
		left = left + 1;
	}
}

void ft_print_comb2(void)
{
	my_comb(99, 2);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
