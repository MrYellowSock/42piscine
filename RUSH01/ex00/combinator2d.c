/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinator2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:20:57 by ookamonu          #+#    #+#             */
/*   Updated: 2023/01/22 12:56:52 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	**alocate_square(int n);

void	fill(char *arr, int size, int value);

void	fill2d(char **arr, int h, int w, int val);

void	gen_comb(char **holder, int cur_j, int cur_i, int expected_len,
		void (*callback)(char **, int))
{
	char	avail_numbers[expected_len];
	char	avail_numbers2[expected_len];
	int		i_canuse;
	int		j_canuse;

	if (cur_j >= expected_len)
	{
		return (callback(holder, expected_len));
	}
	if (cur_i >= expected_len)
	{
		return (gen_comb(holder, cur_j + 1, 0, expected_len, callback));
	}
	fill(avail_numbers, expected_len, 1);
	fill(avail_numbers2, expected_len, 1);
	for (int i = 0; i < cur_i; i++)
	{
		avail_numbers[(unsigned char)holder[cur_j][i]] = 0;
	}
	for (int j = 0; j < cur_j; j++)
	{
		avail_numbers2[(unsigned char)holder[j][cur_i]] = 0;
	}
	for (int o = 0; o < expected_len; o++)
	{
		i_canuse = avail_numbers[o];
		j_canuse = avail_numbers2[o];
		if (i_canuse && j_canuse)
		{
			holder[cur_j][cur_i] = o;
			gen_comb(holder, cur_j, cur_i + 1, expected_len, callback);
		}
	}
}

void	gen_comb_ez(int n, void (*callback)(char **, int))
{
	char	**toprint;

	toprint = alocate_square(n);
	fill2d(toprint, n, n, -1);
	gen_comb(toprint, 0, 0, n, callback);
}

