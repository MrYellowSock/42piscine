#include "../ex07/ft_rev_int_tab.c"
#include <stdio.h>

int	main(void)
{
	int	arr[5];

	arr[0] = 5;
	arr[1] = 4;
	arr[2] = 3;
	arr[3] = 2;
	arr[4] = 1;
	ft_rev_int_tab(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
}
