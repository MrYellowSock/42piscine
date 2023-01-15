/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:13:57 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 14:13:51 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../myio.h"
#include <unistd.h>

void	ft_print_comb(void)
{
	int	start;

	start = 0;
	while (start < 1000)
	{
		if (m_is_uniq(start, 3))
		{
			m_put_nbr(start, 10, 3);
			write(1, ", ", 2);
		}
		start += 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
