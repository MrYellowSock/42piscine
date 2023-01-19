#include "../ex06/ft_str_is_printable.c"
#include <stdio.h>

int	main(void)
{
	char	str[10];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = ' ';
	str[5] = 'f';
	str[6] = 'g';
	str[7] = 'h';
	str[8] = 'i';
	str[9] = 0;
	printf("%d\n", ft_str_is_printable(str));
	str[2] = 2;
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
