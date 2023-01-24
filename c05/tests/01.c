#include <stdio.h>
#include "../ex00/ft_iterative_factorial.c"
#include "../ex01/ft_recursive_factorial.c"

void test(int n)
{
	printf("(%d) %d %d\n",n,ft_iterative_factorial(n),ft_recursive_factorial(n));
}
int main ()
{
	for(int i=-5;i<9;i++)
	{
		test(i);
	}
	return 0;
}


