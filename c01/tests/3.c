#include "../ex03/ft_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 0;
	b = 0;
	div = &a;
	mod = &b;
	ft_div_mod(10, 2, div, mod);
	printf("%d %d\n", *div, *mod);
	ft_div_mod(10, 3, div, mod);
	printf("%d %d", *div, *mod);
}
