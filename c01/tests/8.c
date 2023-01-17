#include "../ex08/ft_sort_int_tab.c"
#include <stdio.h>

int	main(void)
{
	int	arr[5];

	arr[0] = 4;
	arr[1] = 3;
	arr[2] = 1;
	arr[3] = 5;
	arr[4] = 0;
	ft_sort_int_tab(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}
