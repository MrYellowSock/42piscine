#include "../ex04/ft_ultimate_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}
