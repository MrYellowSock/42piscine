#include "../ex03/ft_strjoin.c"
#include <stdio.h>

int main(int argc , char ** argv)
{
	char * all = ft_strjoin(argc - 1,argv + 1,",");
	char * all2 = ft_strjoin(argc - 1,argv + 1,"");
	printf("%s\n", all);
	printf("%s\n", all2);
	return EXIT_SUCCESS;
}
