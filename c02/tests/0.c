#include "../ex00/ft_strcpy.c"
#include <stdio.h>

int	main(void)
{
	char	buffer[80];

	ft_strcpy(buffer, "Hello ");
	printf("%s\n", buffer);
	return (0);
}
