/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:57:11 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/22 17:58:07 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print1d(char *arr, int size)
{
	int		i;
	char	x;

	i = 0;
	while (i < size)
	{
		if (i > 0)
		{
			write(1, " ", 1);
		}
		x = '0' + arr[i] + 1;
		write(1, &x, 1);
		i = i + 1;
	}
}

// display 2d square array.
void	print2d(char **arr, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		print1d(arr[j], size);
		j = j + 1;
		write(1, "\n", 1);
	}
}
