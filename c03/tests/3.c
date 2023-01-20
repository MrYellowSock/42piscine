#include "../ex03/ft_strncat.c"
#include <stdio.h>
#include <string.h>

void	print_byte(char *s, int n)
{
	if(n <= 0)
	{
		printf("\n");
		return;
	}
	else {
		printf("%d ",*s);
		return print_byte(s+1, n-1);
	}
}
void	fill_weird(char *s, int n)
{
	if(n <= 0)
	{
		return;
	}
	else {
		*s = 1;
		return fill_weird(s+1, n-1);
	}
}
void	test(char *s2, int n)
{
	char	s1[13];
	char	s1_2[13];
	fill_weird(s1, 13);
	fill_weird(s1_2, 13);
	s1[0] = 'H';
	s1[1] = 'i';
	s1[2] = '\0';
	s1_2[0] = 'H';
	s1_2[1] = 'i';
	s1_2[2] = '\0';

	printf("your:%s: lib:%s:\n", ft_strncat(s1, s2, n), strncat(s1_2, s2, n));
	print_byte(s1, 13);
	print_byte(s1_2, 13);
}

int	main(void)
{
	test(" World", 3);
	test(" World", 1);
	test(" World", 9);
	test(" 0123456789ABCDEFGHIJKLMNOPQRSTUV",5);
	test(" World", 0);
	test("", 0);
	test("", 5);
}
