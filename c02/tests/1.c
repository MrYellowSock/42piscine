#include "../ex01/ft_strncpy.c"
#include <stdio.h>

int	main(void)
{
	char	buffer[15];

	printf("Expecting:\nabcdefg\n123456g\nabc456g\nabc456g\n\n");
	printf("%s\n", ft_strncpy(buffer, "abcdefg", 10));
	printf("%s\n", ft_strncpy(buffer, "1234567", 6));
	printf("%s\n", ft_strncpy(buffer, "abcdefg", 3));
	printf("%s\n", ft_strncpy(buffer, "*******", 0));
	return (0);
}
