#include "../ex03/ft_strncat.c"
#include <stdio.h>
#include <string.h>

void	test( char *s2, int n)
{
	char s1[20] = "Hello";
	char s1_2[20] = "Hello";
	printf("your:%s: lib:%s:\n", ft_strncat(s1, s2, n), strncat(s1_2, s2, n));
}

int	main(void)
{
	test(" World", 3);
	test(" World", 9);
}
