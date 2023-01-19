#include "../ex04/ft_str_is_lowercase.c"
#include <stdio.h>

int	main(void)
{
	printf("%d %d\n", ft_str_is_lowercase("dasdfsdffasdfsdf"),
			ft_str_is_lowercase("dasdfsdffasdFsdf"));
	return (0);
}
