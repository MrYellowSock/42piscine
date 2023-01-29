/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:47:20 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/29 18:47:30 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*jumbo;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		return (NULL);
	}
	i = 0;
	jumbo = malloc(size * sizeof(int));
	if (jumbo == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		jumbo[i++] = min++;
	}
	return (jumbo);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
	{
		return (0);
	}
	else if (*range == NULL)
	{
		return (-1);
	}
	else
	{
		return (max - min);
	}
}
