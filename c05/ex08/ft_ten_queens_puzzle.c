#include <stdio.h>
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

int	can_kill(int j1, int i1, int j2, int i2)
{
	return (j1 == j2) || (i1 == i2) || (abs(i1 - i2) == abs(j1 - j2));
}

int	can_place(char board[BOARD_SIZE], int cur_column, int row)
{
	for (int i = 0; i < cur_column; i++)
	{
		if (can_kill(board[i], i, row, cur_column))
		{
			return (0);
		}
	}
	return (1);
}

int counter = 0;
void	display(char board[BOARD_SIZE])
{
	char	val;

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		val = board[i] + '0';
		write(1, &val, 1);
	}
	write(1, "\n", 1);
	counter++;
}

void	magic(char board[BOARD_SIZE], int cur_column)
{
	if (cur_column >= BOARD_SIZE)
	{
		display(board);
		return ;
	}
	for (int j = 0; j < BOARD_SIZE; j++)
	{
		if (can_place(board, cur_column, j))
		{
			board[cur_column] = j;
			magic(board, cur_column + 1);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[BOARD_SIZE];

	magic(board, 0);
	return (counter);
}
