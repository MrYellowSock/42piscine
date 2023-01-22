/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:31:51 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/22 15:40:27 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// allocate 2d array in square
char	**alocate_square(int n)
{
	char	**toprint;
	int		i;

	toprint = (char **)malloc(n * sizeof(char *));
	i = 0;
	while (i < n)
	{
		toprint[i] = (char *)malloc(n * sizeof(char));
		i++;
	}
	return (toprint);
}
