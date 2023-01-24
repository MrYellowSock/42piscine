/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:57:51 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/24 21:16:28 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BOARD_SIZE 10

int	abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}

int	can_place(char board[BOARD_SIZE], int cur_column, int row)
{
	int	i1;
	int	j1;
	int	j2;
	int	i2;

	i1 = 0;
	while (i1 < cur_column)
	{
		j1 = board[i1];
		j2 = row;
		i2 = cur_column;
		if ((j1 == j2) || (i1 == i2) || (abs(i1 - i2) == abs(j1 - j2)))
		{
			return (0);
		}
		i1++;
	}
	return (1);
}

int		g_counter = 0;

void	display(char board[BOARD_SIZE])
{
	char	val;
	int		i;

	i = 0;
	while (i < BOARD_SIZE)
	{
		val = board[i] + '0';
		write(1, &val, 1);
		i++;
	}
	write(1, "\n", 1);
	g_counter++;
}

void	magic(char board[BOARD_SIZE], int cur_column)
{
	int	j;

	if (cur_column >= BOARD_SIZE)
	{
		display(board);
		return ;
	}
	j = 0;
	while (j < BOARD_SIZE)
	{
		if (can_place(board, cur_column, j))
		{
			board[cur_column] = j;
			magic(board, cur_column + 1);
		}
		j++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[BOARD_SIZE];

	magic(board, 0);
	return (g_counter);
}
