#include <stdio.h>
#include "../ex02/ft_iterative_power.c"
#include "../ex03/ft_recursive_power.c"

void test(int n, int p)
{
	printf("(%d,%d) %d %d\n",n,p,ft_iterative_power(n,p),ft_iterative_power(n,p));
}
int main ()
{
	for(int i=-3;i<3;i++)
	{
		for(int j=-3;j<=3;j++)
		{
			test(i,j);
		}
	}
	return 0;
}


