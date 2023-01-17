#include "./ex00/ft_ft.c"
#include "./ex01/ft_ultimate_ft.c"
#include "./ex02/ft_swap.c"
#include "./ex03/ft_div_mod.c"
#include <stdio.h>
#include <unistd.h>

void	ex00(void)
{
	int	nb2;

	nb2 = 24;
	ft_ft(&nb2);
	printf("%d", nb2);
}

void	ex01(void)
{
	int	nb;
	int	*nb2;
	int	**nb3;
	int	***nb4;
	int	****nb5;
	int	*****nb6;
	int	******nb7;
	int	*******nb8;
	int	********nb9;
	int	*********nb_last;

	nb = 2;
	nb2 = &nb;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	nb8 = &nb7;
	nb9 = &nb8;
	nb_last = &nb9;
	ft_ultimate_ft(nb_last);
	printf("%d", *********nb_last);
}

void	ex02(void)
{
	int	a;
	int	b;

	a = 0;
	b = 2;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}

void	ex03(void)
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
	printf("%d %d\n", *div, *mod);
}

void	sep(void)
{
	printf("\n--------------------\n");
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
	return (0);
}
