/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:22:44 by ookamonu          #+#    #+#             */
/*   Updated: 2023/01/22 17:29:14 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*reverse(char *arr, char *out, int size);

char	*copy_vert(char **arr, char *out, int size, int column);

// how many box you can see.
int	visible_boxes(char *arr, int size)
{
	int	pos;
	int	tallest;
	int	count;

	tallest = -1;
	count = 0;
	pos = 0;
	while (pos < size)
	{
		if (arr[pos] > tallest)
		{
			count++;
			tallest = arr[pos];
		}
		pos++;
	}
	return (count);
}

// ans size must be x4 of size
int	*visible_boxes2d(char **arr, int *ans, int size)
{
	char	*temp;
	char	*temp2;
	int		i;

	temp = malloc(size * sizeof(char));
	temp2 = malloc(size * sizeof(char));
	i = 0;
	while (i < size)
	{
		copy_vert(arr, temp, size, i);
		ans[size * 0 + i] = visible_boxes(temp, size);
		ans[size * 1 + i] = visible_boxes(reverse(temp, temp2, size), size);
		i++;
	}
	i = 0;
	while (i < size)
	{
		ans[size * 2 + i] = visible_boxes(arr[i], size);
		ans[size * 3 + i] = visible_boxes(reverse(arr[i], temp, size), size);
		i++;
	}
	free(temp);
	free(temp2);
	return (ans);
}
