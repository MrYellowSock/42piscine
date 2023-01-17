#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
#include "./ex06/ft_print_comb2.c"
#include "./ex07/ft_putnbr.c"
#include "./ex08/ft_print_combn.c"
#include <unistd.h>

int	ex08(void)
{
	ft_print_combn(1);
	write(1, "\n", 1);
	ft_print_combn(2);
	write(1, "\n", 1);
	ft_print_combn(3);
	write(1, "\n", 1);
	ft_print_combn(9);
	return (0);
}

int	ex07(void)
{
	int	i;

	i = 0;
	while (i < 157)
	{
		ft_putnbr(i);
		ft_putnbr(-i);
		write(1, " ", 2);
		i++;
	}
	ft_putnbr(-2147483648);
	write(1, " ", 2);
	ft_putnbr(2147483647);
	return (0);
}

int	ex06(void)
{
	ft_print_comb2();
	return (0);
}

int	ex05(void)
{
	ft_print_comb();
	return (0);
}

int	ex04(void)
{
	ft_is_negative(10);
	ft_is_negative(0);
	ft_is_negative(-10);
	return (0);
}

int	ex03(void)
{
	ft_print_numbers();
	return (0);
}

int	ex02(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

int	ex01(void)
{
	ft_print_alphabet();
	return (0);
}

int	ex00(void)
{
	ft_putchar('x');
	return (0);
}

void	sep(void)
{
	write(1, "\n--------------------\n", 22);
}

int	main(void)
{
	ex00();
	sep();
	ex01();
	sep();
	ex02();
	sep();
	ex03();
	sep();
	ex04();
	sep();
	ex05();
	sep();
	ex06();
	sep();
	ex07();
	sep();
	ex08();
	return (0);
}
