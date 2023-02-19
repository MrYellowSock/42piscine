#include "libft.h"

int	ispace(char c)
{
	return (c >= 9 && c <= 13 || c == ' ');
}

const char	*skip(const char *str, int (*f)(char c))
{
	while (f(*str))
	{
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	const char	*endofnum;
	int			pow;
	int			sum;

	sum = 0;
	pow = 1;
	if (*str == '-')
	{
		pow *= -1;
		str++;
	}
	endofnum = eon(str);
	if (endofnum < str)
	{
		return (0);
	}
	while (endofnum >= str)
	{
		sum += pow * (*endofnum - '0');
		endofnum--;
		pow *= 10;
	}
	return (sum);
}
