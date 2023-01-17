#include "../ex01/ft_ultimate_ft.c"
#include <stdio.h>

int	main(void)
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
