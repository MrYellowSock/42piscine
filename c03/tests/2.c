#include "../ex02/ft_strcat.c"
#include <stdio.h>
#include <string.h>

void	test( char *s2)
{
	char dest1[30] = "hello ";
	char dest2[30] = "hello ";
	printf("your:%s lib:%s\n", ft_strcat(dest1, s2), strcat(dest2, s2));
}

int	main(void)
{
	test( " again");
	test( " vm");
}
