#include <stdio.h>
#define BOARD_SIZE 10
#define MAX_CHESS 10

typedef struct chess_peice
{
	int	j;
	int	i;
}		chess_peice;

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

int	can_kill(chess_peice aggressor, chess_peice victim)
{
	return (aggressor.j == victim.j) || (aggressor.i == victim.i)
	|| (abs(aggressor.i - victim.i) == abs(aggressor.j - victim.j));
}

int	canplace(chess_peice pos[MAX_CHESS], int cur_peice_dex)
{
	for (int p = 0; p < cur_peice_dex; p++)
	{
		if (can_kill(pos[p], pos[cur_peice_dex]))
		{
			return (0);
		}
	}
	return (1);
}

void	display(chess_peice pieces[MAX_CHESS], int total_len)
{
	if (total_len >= MAX_CHESS)
	{
		for (int i = 0; i < total_len; i++)
		{
			printf("(%d %d) ", pieces[i].j, pieces[i].i);
		}
		printf("\n");
	}
}

void	magic(chess_peice pos[MAX_CHESS], int cur_peice_dex)
{
	int	end_of_recursion;

	end_of_recursion = 1;
	for (int j = 0; j < BOARD_SIZE; j++)
	{
		for (int i = 0; i < BOARD_SIZE; i++)
		{
			pos[cur_peice_dex].j = j;
			pos[cur_peice_dex].i = i;
			if (canplace(pos, cur_peice_dex))
			{
				end_of_recursion = 0;
				magic(pos, cur_peice_dex + 1);
			}
		}
	}
	if (end_of_recursion)
	{
		display(pos, cur_peice_dex);
	}
}

int	ft_ten_queens_puzzle(void)
{
	chess_peice	all[MAX_CHESS];

	magic(all, 0);
	return (0);
}

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
