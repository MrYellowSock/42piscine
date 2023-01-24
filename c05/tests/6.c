#include "../ex06/ft_is_prime.c"
#include <stdio.h>

int main ()
{
	for(int i = -9;i<=36;i++)
	{
		if(ft_is_prime(i))
		{
			printf("(%d)\n",i);
		}
	}
	return 0;
}
