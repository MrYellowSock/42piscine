/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:52:54 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/14 13:25:58 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../shared.h"

void	ft_print_combn(int toprint, int curdepth, int maxdepth)
{
	ft_putnbr_base(toprint, 10);
	if(curdepth >= maxdepth)
	{
		return;
	}
	int last = toprint % 10;
	int cur = 0;
	while(cur < last)
	{
		ft_print_combn(toprint + cur * pow(10,curdepth),curdepth+1)
		cur = cur + 1;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
