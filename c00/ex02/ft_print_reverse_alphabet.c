/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:52:42 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/17 11:09:00 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	state;

	state = 'z';
	while (state >= 'a')
	{
		write(1, &state, 1);
		state = state - 1;
	}
}
