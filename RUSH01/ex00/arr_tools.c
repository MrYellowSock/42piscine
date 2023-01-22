/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:01:49 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/22 13:40:20 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

void	fill(char *arr, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = value;
		i++;
	}
}

void	fill2d(char **arr, int h, int w, int val)
{
	int	j;

	j = 0;
	while (j < h)
	{
		fill(arr[j], w, val);
		j++;
	}
}

char	*reverse(char *arr, char *out, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		out[i] = arr[size - i - 1];
		i++;
	}
	return (out);
}

char	*copy_vert(char **arr, char *out, int size, int column)
{
	int	j;

	j = 0;
	while (j < size)
	{
		out[j] = arr[j][column];
		j++;
	}
	return (out);
}

int	arr_cmp(int *s1, int *s2, unsigned int n)
{
	int	diff;

	if (n <= 0)
	{
		return (0);
	}
	diff = *s1 - *s2;
	if (*s1 == 0 || *s2 == 0 || diff != 0 || n <= 1)
	{
		return (diff);
	}
	else
	{
		return (arr_cmp(s1 + 1, s2 + 1, n - 1));
	}
}
