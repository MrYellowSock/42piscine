#include <unistd.h>

int	is_printable(char a)
{
	return (a >= 32 && a <= 127);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != 0)
	{
		if (is_printable(*str))
		{
			write(1, str, 1);
		}
		else
		{
			// something like put number.
		}
		str++;
	}
}
