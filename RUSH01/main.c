#include "stdio.h"
int		s_count = 0;
void	print2d(char **arr, int size)
{
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	s_count++;
}

void both(char **arr, int size)
{
	print2d(arr,size);
}

int	main(void)
{
	gen_comb_ez(4, both);
	printf("%d\n", s_count);
}
