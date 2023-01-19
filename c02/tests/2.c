#include "../ex02/ft_str_is_alpha.c"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = ft_str_is_alpha("AbDsxCosDKdsFhjwop");
	b = ft_str_is_alpha(":abdsxcosdkdsfhjop");
	printf("%d %d\n", a, b);
	return (0);
}
