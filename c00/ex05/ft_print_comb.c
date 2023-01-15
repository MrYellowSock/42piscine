/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:13:57 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 22:58:15 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	increase(char x)
{
	return (x + 1);
}

void	ft_print_comb(void)
{
	char	arr[3];
	int		count;

	count = 0;
	arr[0] = '0';
	while (arr[0] <= '7')
	{
		arr[1] = increase(arr[0]);
		while (arr[1] <= '8')
		{
			arr[2] = increase(arr[1]);
			while (arr[2] <= '9')
			{
				if (count > 0)
				{
					write(1, ", ", 2);
				}
				write(1, arr, 3);
				arr[2] = increase(arr[2]);
				count += 1;
			}
			arr[1] = increase(arr[1]);
		}
		arr[0] = increase(arr[0]);
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
