#include "../ex02/ft_strcat.c"
#include <stdio.h>
#include <string.h>

void	test(char *s1, char *s2)
{
	printf("your:%d lib:%d\n", strcat(s1, s2), strcat(s1, s2));
}

int	main(void)
{
	test("abc", "abc");
	test("abc", "abd");
	test("abd", "abd");
	test("xyza0", "xyzb0");
	test("xyza0", "xyzb1");
	test("wowo", "owowo");
}
