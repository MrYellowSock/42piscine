#include "../ex02/ft_ultimate_range.c"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	**what;

	what = malloc(1 * sizeof(int *));
	for (int j = -4; j < 4; j++)
	{
		for (int i = -4; i < 4; i++)
		{
			int status = ft_ultimate_range(what, j, i);
			printf("(%d, %d) : %d ->", j, i, status);
			if (status == -1)
			{
				printf("NULL bad!\n");
			}
			else
			{
				for (int x = 0; x < i - j; x++)
				{
					printf("%d ", ( *what )[x]);
				}
				printf("\n");
			}
		}
	}
	return (0);
}
