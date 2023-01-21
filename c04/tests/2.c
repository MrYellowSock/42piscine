#include <stdio.h>
#include "../ex02/ft_putnbr.c"

void test(int nb)
{
	printf("%d\n",nb);
	ft_putnbr(nb);
	printf("\n");
}

int	main(void)
{
	test(-2147483648);
	test(1);
	test(0);
	test(10913001);
	test(2147483647);
	return (0);
}
