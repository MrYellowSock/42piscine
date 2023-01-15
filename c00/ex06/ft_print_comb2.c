/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:11:29 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 06:47:57 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared.h"
#include <unistd.h>


void	ft_print_comb2(int maxval, int digit)
{
	int	left;
	int	right;

	left = 0;
	while (left <= maxval)
	{
		right = left + 1;
		while (right <= maxval)
		{
			ft_putnbr_base(left, 10);
			write(1, " ", 1);
			ft_putnbr_base(right, 10);
			write(1, ", ", 2);
			right = right + 1;
		}
		left = left + 1;
	}
}

int	main(void)
{
	ft_print_comb2(10, 2);
	return (0);
}
