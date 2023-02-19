#include "libft.h"

void	ft_putnbr_fd(int input, int fd)
{
	char	*conv;

	conv = ft_itoa(input);
	ft_putstr_fd(conv, fd);
	free(conv);
}
