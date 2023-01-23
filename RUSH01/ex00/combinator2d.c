/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ /*   combinator2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:20:57 by ookamonu          #+#    #+#             */
/*   Updated: 2023/01/23 08:23:28 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char			**alocate_square(int n);

void			fill(char *arr, int size, int value);

void			fill2d(char **arr, int h, int w, int val);

// find what number we can use at that position
char	*non_dulplicate_map(char **holder, int cur_j, int cur_i,
		int expected_len)
{
	int		j;
	int		i;
	char	*avail_numbers;

	j = 0;
	i = 0;
	avail_numbers = malloc(expected_len * sizeof(char));
	fill(avail_numbers, expected_len, 1);
	while (i < cur_i)
	{
		avail_numbers[(unsigned char)holder[cur_j][i]] = 0;
		i++;
	}
	while (j < cur_j)
	{
		avail_numbers[(unsigned char)holder[j][cur_i]] = 0;
		j++;
	}
	return (avail_numbers);
}

typedef struct t_coordinate
{
	int			j;
	int			i;
}				t_coordinate;

t_coordinate	at(int j, int i)
{
	t_coordinate	pos;

	pos.j = j;
	pos.i = i;
	return (pos);
}

// generate cobinations , while calling callback function for every combination.
void	gen_comb(char **holder, t_coordinate coord, int expected_len,
		int (*callback)(char **, int, int))
{
	char	*usables;
	int		o;

	if (coord.j >= expected_len)
	{
		callback(holder,expected_len, expected_len);
		return;
	}
	if (coord.i >= expected_len && callback(holder,expected_len,coord.j + 1))
	{
		return (gen_comb(holder, at(coord.j + 1, 0), expected_len, callback));
	}
	usables = non_dulplicate_map(holder, coord.j, coord.i, expected_len);
	o = 0;
	while (o < expected_len)
	{
		if (usables[o])
		{
			holder[coord.j][coord.i] = o;
			gen_comb(holder, at(coord.j, coord.i + 1), expected_len, callback);
		}
		o++;
	}
	free(usables);
}

// wrapper for gen_comb
void	gen_comb_ez(int n, int (*callback)(char **, int, int))
{
	char	**toprint;

	toprint = alocate_square(n);
	fill2d(toprint, n, n, -1);
	gen_comb(toprint, at(0, 0), n, callback);
}
