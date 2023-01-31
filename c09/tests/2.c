#include <stdio.h>
#include "../ex02/ft_split.c"

void test(char * input, char * charset)
{
	printf("'%s' , '%s' ->\n",input,charset);
	char ** res = ft_split(input, charset);
	while(*res != 0)
	{
		printf("%s\n",*res++);
	}
}
int main()
{
	test("1,2,3,4,5", ",");
	test("1,2/3,4/5", ",/");
	test(",,102,022/143,/5bag,", ",/");
	test("", ",/");
	test("", "");
	test("ancdsfsdf", "");
	return EXIT_SUCCESS;
}
