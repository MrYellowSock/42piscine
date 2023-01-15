/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:52:54 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 21:26:07 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../myio.h"

void	ft_print_combn(int n)
{
	int	first;
	int	last;
	int	tot;

	first = 1;
	tot = 0;
	last = m_power(10, n);
	while (first < last)
	{
		if (m_is_uniq(first, n))
		{
			if (tot > 0)
			{
				write(1, " ,", 2);
			}
			m_put_nbr(first, 10, n);
			tot += 1;
		}
		first = first + 1;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
