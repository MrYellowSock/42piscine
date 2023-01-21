#include "../ex05/ft_strlcat.c"
#include <stdio.h>
#include <bsd/string.h>

void	test(char *s2, int n)
{
	char s1 [30]  = "hi";
	char s1_2 [30] = "hi";
	printf("your:%d lib:%ld\n", ft_strlcat(s1, s2, n), strlcat(s1_2, s2, n));
	printf("your:%s: lib:%s:\n", s1, s1_2);
}

int	main(void)
{
	test("abc", 3);
	test("owowo", 4);

	test("abc", 9);
	test("owowo", 9);

	test("abc", 2);
	test("owowo", 2);

	test("owo", 0);
	test("owosdfkfjsldjflsdfjlsdjf ldsjfj 03 j0jsdfh0psdufjdfsdjfuf0sdufo", 20);
	test("", 0);
	test("", 9);
}
