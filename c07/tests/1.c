#include "../ex01/ft_range.c"
#include <stdio.h>

int	main(void)
{
	int	*what;

	for (int j = -4; j < 4; j++)
	{
		for (int i = -4; i < 4; i++)
		{
			printf("(%d, %d) ->", j, i);
			what = ft_range(j, i);
			if (what == NULL)
			{
				printf("NULL!\n");
			}
			else
			{
				for (int x = 0; x < i - j; x++)
				{
					printf("%d ", what[x]);
				}
				printf("\n");
			}
		}
	}
	return (0);
}
