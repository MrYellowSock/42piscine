#include <stdio.h>
#include "../ex00/ft_strlen.c"

void	test(char *str)
{
	printf("%d %s\n",ft_strlen(str),str);
}

int	main(void)
{
	test("");
	test("abcdef");
	test("0123456");
	return (0);
}
