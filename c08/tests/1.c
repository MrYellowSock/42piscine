#include "../ex01//ft_boolean.h"
#include <unistd.h>
void	ft_putstr_nl(char *str)
{
	while (*str)
		write(1, str++, 1);
}
t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}
int	main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr_nl(EVEN_MSG);
	else
		ft_putstr_nl(ODD_MSG);
	return (SUCCESS);
}
