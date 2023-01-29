#include "../ex03/ft_strjoin.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char ** argv)
{
	char * all = ft_strjoin(argc - 1,argv + 1,",");
	char * all2 = ft_strjoin(argc - 1,argv + 1,"");

	int	size = 5;
	char *language[size];
	char sep[] = {", "};

	language[0] = "Java";
	language[1] = "Python";
	language[2] = "C++";
	language[3] = "HTML";
	language[4] = "SQL";
	char	*all3 = ft_strjoin(size, language, sep);
	char	*all4 = ft_strjoin(0, language, sep);

	printf("%s\n", all);
	printf("%s\n", all2);
	printf("%s\n", all3);
	printf("%s\n", all4);
	free(all4);
	return EXIT_SUCCESS;
}
