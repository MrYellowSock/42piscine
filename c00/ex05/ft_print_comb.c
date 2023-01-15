/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:13:57 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 06:46:47 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mynum.h"
#include "../myio.h"

void	ft_print_comb(void)
{
	int start = 0;
	while(start < 1000)
	{
		if(m_is_uniq(start, 3))
		{
			m_put_nbr(start, 10, 3)
		}
		start += 1;
	}
}

void	main(void)
{
	ft_print_comb();
}
