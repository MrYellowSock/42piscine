#define BOARD_SIZE 10

typedef struct chess_peice
{
	int j;
	int i;
}

int can_kill(chess_peice aggressor, chess_peice victim)
{
	return aggressor.j == victim.j;
}

void magic(chess_peice pos[BOARD_SIZE])
{

}

int ft_ten_queens_puzzle(void)
{

}
