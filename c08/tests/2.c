#include "../ex02/ft_abs.h"
#include <stdio.h>

void test(int n)
{
	printf("%d -> unsigned:%u signed:%d\n", n, ABS(n), ABS(n));
}

int main()
{
	for(int i=-6;i < 6;i++)
	{
		test(i);
	}
	test(-2147483648);
	test(2147483647);
	

	return 0;
}
