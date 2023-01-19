#include "../ex04/ft_strstr.c"
#include <stdio.h>
#include <string.h>

void	test(char *s1, char *s2)
{
	printf("your:%s lib:%s\n", ft_strstr(s1, s2), strstr(s1, s2));
}

int	main(void)
{
	test("hello world", "wor");
	test("hello world", "hell");
	test("hello world", "hello world");
	test("hello world", "");
	test("", "");
	test("", "hello world");
}
