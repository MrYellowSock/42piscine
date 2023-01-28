#include "../ex07/ft_find_next_prime.c"
#include <stdio.h>

int main ()
{
	for(int i = -9;i<=36;i++)
	{
		printf("(%d) -> %d\n",i,ft_find_next_prime(i));
	}
	int super_dupers[] = {-2147483648,2147483647, 900000000};
	for (int i = 0; i < 3; i++)
	{
		printf("(%d) -> %d\n", super_dupers[i], ft_find_next_prime(super_dupers[i]));
	}
	return 0;
}
