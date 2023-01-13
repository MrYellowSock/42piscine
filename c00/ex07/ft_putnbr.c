/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:14:07 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/13 12:29:09 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int power(int base,int pow)
{
	int s_c;
	int s_accumulate = 1;
	
	s_c = 0;
	while (s_c < pow) {
		s_accumulate *= base;
	}

	return s_accumulate;
}

void ft_putnbr(int nb,int base)
{
	int max_power = 0;
	while (	nb / power(base,max_power) >= base) {
		max_power = max_power + 1;
	}
}


void main(void)
{
	ft_putnbr(402);
}
