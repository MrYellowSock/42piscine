#include "../ex10/ft_strlcpy.c"
#include <stdio.h>

int	main(void)
{
	char	buffer[15];

	printf("%d\n", ft_strlcpy(buffer, "abcdefg", 10));
	printf("%s\n", buffer);
	printf("%d\n", ft_strlcpy(buffer, "1234567", 6));
	printf("%s\n", buffer);
	printf("%d\n", ft_strlcpy(buffer, "abcdefg", 3));
	printf("%s\n", buffer);
	printf("%d\n", ft_strlcpy(buffer, "*******", 0));
	printf("%s\n", buffer);
	return (0);
}
