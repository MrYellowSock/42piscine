/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:52:54 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 06:40:35 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../shared.h"


void	ft_print_combn(int n)
{
	int first = 1;
	int last = power(10, n);
	while(first < last)
	{
		ft_putnbr_base(first, 10);
		write(1, " ,", 2);
		first = first + 1;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
