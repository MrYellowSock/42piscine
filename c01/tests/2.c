#include "../ex02/ft_swap.c"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 2;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}
