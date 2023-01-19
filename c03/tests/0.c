#include "../ex00/ft_strcmp.c"
#include <stdio.h>
#include <string.h>

void	test(char *s1, char *s2)
{
	printf("our_strcmp:%d str_cmp:%d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
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
