#include "../ex00/ft_strdup.c"
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
 
void test(char source[])
{
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
    char* target2 = ft_strdup(source);
 
    printf("%s,%s\n", target, target2);
}

int main()
{
	test("Hello world");
	test("");
	test(" ");
    return 0;
}
