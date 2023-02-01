#include <stdio.h>
#include "../ex03/ft_atoi.c"

void test(char * str)
{
	printf("%s -> %d\n",str,ft_atoi(str));
}

int	main(void)
{
	test("-2147483648");
	test("1");
	test("0");
	test("10913001");
	test("2147483647");
	test("214748abcdsf");
	test("-24dfdgx3");
	test("   -24dfdgx3");
	test("   --24dfdgx3");
	test("   -+--24dfdgx3");
	test("   -24-3");
	return (0);
}
