#include "../ex04/ft_putnbr_base.c"
#include <unistd.h>

void test(char *base)
{
	ft_putnbr_base(1,base);
	write(1, "\n", 1);
	ft_putnbr_base(1000,base);
	write(1, "\n", 1);
	ft_putnbr_base(0,base);
	write(1, "\n", 1);
	ft_putnbr_base(10913001,base);
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648,base);
	write(1, "\n", 1);
	ft_putnbr_base(2147483647,base);
	write(1, "\n", 1);
	ft_putnbr_base(214748,base);
	write(1, "\n", 1);
	ft_putnbr_base(-24,base);
	write(1, "\n", 1);
	write(1, "\n", 1);
}

int	main(void)
{
	test("0123456789");
	test("01234567");
	test("0123456789ABCDEF");
	test("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	test("01");
	test("0");
	test("-0123");
	test("+0123");
	test(" 0 123");
	return (0);
}
