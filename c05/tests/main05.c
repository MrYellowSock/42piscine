#include <stdio.h>
#include "../ex00/ft_iterative_factorial.c"
#include "../ex01/ft_recursive_factorial.c"
#include "../ex02/ft_iterative_power.c"
#include "../ex03/ft_recursive_power.c"
#include "../ex04/ft_fibonacci.c"
#include "../ex05/ft_sqrt.c"
#include "../ex06/ft_is_prime.c"

int main()
{
	printf("----------------ex00-----------------\n");
	printf("4! is %d\n", ft_iterative_factorial(4));
	printf("-1! is %d\n", ft_iterative_factorial(-1));
	printf("0! is %d\n", ft_iterative_factorial(0));
	printf("1! is %d\n", ft_iterative_factorial(1));

	printf("----------------ex01-----------------\n");
	printf("-1! = %d\n", ft_recursive_factorial(-1));
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("1! = %d\n", ft_recursive_factorial(1));
	printf("4! = %d\n", ft_recursive_factorial(4));

	printf("----------------ex02-----------------\n");
	printf("2 power 2 is %d\n", ft_iterative_power(2,2));
	printf("2 power 0 is %d\n", ft_iterative_power(2,0));
	printf("2 power -2 is %d\n", ft_iterative_power(2,-2));

	printf("----------------ex03------------------\n");
	printf("2 power 8 return '256' : %d\n", ft_recursive_power(2,8));
	printf("2 power -2 return '-2' : %d\n", ft_recursive_power(2,-2));
	printf("0 power 0 should return '1' : %d\n", ft_recursive_power(0,0));
	printf("2 power 0 return '1' : %d\n", ft_recursive_power(2,0));
	printf("-2 power 2 return '4' : %d\n", ft_recursive_power(-2,2));

	printf("----------------ex04------------------\n");
	printf("Fibo -2 th is %d\n", ft_fibonacci(-2));
	printf("Fibo 0 th is %d\n", ft_fibonacci(0));
	printf("Fibo 1 th is %d\n", ft_fibonacci(1));
	printf("Fibo 9 th is %d\n", ft_fibonacci(9));

	printf("----------------ex05------------------\n");
        printf("root 2 should be '0' : %d\n", ft_sqrt(2));
        printf("root 4 should be '2' : %d\n", ft_sqrt(4));
	
	printf("----------------ex06------------------\n");
	printf("Non-prime numbers return '0' \n");
	printf("nb is 0 = %d\n", ft_is_prime(0));
	printf("nb is 1 = %d\n", ft_is_prime(1));
	printf("nb is -1 = %d\n", ft_is_prime(-1));
	printf("nb is 252 = %d\n", ft_is_prime(252));	
	printf("Prime numbers return '1' \n\n");
	printf("nb is 11 = %d\n", ft_is_prime(11));
	printf("nb is 5 = %d\n", ft_is_prime(5));
	printf("nb is 983 = %d\n", ft_is_prime(983));
	printf("nb is 2,147,483,647 = %d\n", ft_is_prime(2147483647));
	return 0;
}
