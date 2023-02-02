#include "../ex04/ft_convert_base2.c"
#include "../ex04/ft_convert_base.c"
#include <stdio.h>

void test(char *nbr, char *base_from, char *base_to)
{
	char * test = ft_convert_base(nbr, base_from, base_to);
	printf("(%s, %s, %s) -> %s\n",nbr,base_from,base_to,test);
}

int main()
{
//	char bases[][70] = {
//		"0123456789",
//		"01234567",
//		"0123456789ABCDEF",
//		"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
//		"01",
//		"0",
//		"-0123",
//		"+0123",
//		" 0 123",
//		"0123456789",
//		"-abcd",
//		"+abcd",
//		"ab cd",
//		"1",
//		"01",
//		"poneyvif",
//		"01234567",
//		"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
//	};


	test("-255","0123456789", "0123456789ABCDEF");
	test("-255","0123456789ABCDEF", "0123456789");
	test("-255","0123456789ABCDEF", "xb(#$)@");
	test("-2147483648","0123456789", "01");
	test("255","0123456789", "01");
	test("2147483647","0123456789", "01");

	// invalid base
	printf("Invalid bases:\n");
	test("-255","1", "0123456789");
	test("-255","0123456789ABCDEF", "x-b(#$)@");
	test("-255","0123456789ABCDEF", "x+b(#$)@");
	test("-255","01", "0");
	return EXIT_SUCCESS;
}
