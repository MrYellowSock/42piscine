#include "../ex05/ft_sqrt.c"
#include <stdio.h>

int main ()
{
	for(int i = -9;i<=36;i++)
	{
		printf("(%d) -> %d\n",i,ft_sqrt(i));
	}
	return 0;
}
