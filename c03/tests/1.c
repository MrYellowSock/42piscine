#include "../ex01/ft_strncmp.c"
#include <stdio.h>
#include <string.h>

void	test(char *s1, char *s2, int n)
{
	printf("your:%d lib:%d\n", ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
}

int	main(void)
{
	test( "abc", "abc", 1 );
	test( "abcd", "abc", 4 );
	test( "abc", "abcd", 0 );
	test( "abc", "xbc", 10 );
	test( "", "", 3 );

	test("abc", "abc", 3);
	test("abc", "abd", 3);
	test("abd", "abd", 3);
	test("xyza0", "xyzb0", 4);
	test("xyza0", "xyzb1", 4);
	test("wowo", "owowo", 4);
	test("3utshf", "fhsut3", 6);
	test("abc", "abd", 2);
	test("abd", "abd", 2);
	test("xyza0", "xyzb0", 5);
	test("xyza0", "xyzb1", 5);
	test("wowo", "owowo", 2);
	test("wowo", "owowo", 1);
	test("wowo", "owowo", 0);
}
