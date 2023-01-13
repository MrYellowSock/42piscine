/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:57:21 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/13 11:04:00 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	state;

	state = '0';
	while (state <= '9')
	{
		write(1, &state, 1);
		state = state + 1;
	}
}

int	main(void)
{
	ft_print_numbers();
}
