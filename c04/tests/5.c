#include <stdio.h>
#include "../ex05/ft_atoi_base.c"

void test(char * input, char *base)
{
	printf("%s %s %d\n",base,input,ft_atoi_base(input,base));
}

int main ()
{
	test("-2147483648","0123456789");
	test("1","0123456789");
	test("0","0123456789");
	test("10913001","0123456789");
	test("2147483647","0123456789");
	test("214748abcdsf","0123456789");
	test("  -24dfdgx3","0123456789");
	test("  -+-24dfdgx3","0123456789");
	test("  --+-24dfdgx3","0123456789");

	test("-24dfdgx3","-abcd");
	test("-24dfdgx3","+abcd");
	test("-24dfdgx3","ab cd");

	test("1111","1");
	
	test("-1111","01");
	test("FFx","0123456789ABCDEF");

	test("poney","poneyvif");
	test("01234","01234567");

	test("2z","0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

	return 0;
}
