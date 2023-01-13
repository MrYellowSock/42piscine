/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:42:00 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/13 10:48:25 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	state;

	state = 'a';
	while (state <= 'z')
	{
		write(1, &state, 1);
		state = state + 1;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
