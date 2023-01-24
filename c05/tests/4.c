#include "../ex04/ft_fibonacci.c"
#include <stdio.h>

int main ()
{
	for(int i = -2;i<10;i++)
	{
		printf("[%d]%d ",i,ft_fibonacci(i));
	}
	return 0;
}
