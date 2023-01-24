#include "../ex07/ft_find_next_prime.c"
#include <stdio.h>

int main ()
{
	for(int i = -9;i<=36;i++)
	{
		printf("(%d) -> %d\n",i,ft_find_next_prime(i));
	}
	return 0;
}
