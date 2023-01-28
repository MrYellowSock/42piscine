#include "../ex05/ft_sqrt.c"
#include <stdio.h>

int	main(void)
{
	for (int i = -9; i <= 36; i++)
	{
		printf("(%d) -> %d\n", i, ft_sqrt(i));
	}
	int super_dupers[] = {-2147483648,2147483647, 900000000};
	for (int i = 0; i < 3; i++)
	{
		printf("(%d) -> %d\n", super_dupers[i], ft_sqrt(super_dupers[i]));
	}
	return (0);
}
