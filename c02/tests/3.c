#include "../ex03/ft_str_is_numeric.c"
#include <stdio.h>

int	main(void)
{
	printf("%d %d\n", ft_str_is_numeric("0123429290"),
			ft_str_is_numeric("0123429x90"));
	return (0);
}
