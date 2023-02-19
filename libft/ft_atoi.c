#include "libft.h"

int	ispace(int c)
{
	return (( c >= 9 && c <= 13 ) || c == ' ');
}

const char	*skip(const char *str, int (*f)(int c))
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
	str = skip(str, ispace);
	if (*str == '-' || *str == '+')
	{
		if(*str == '-')
			pow *= -1;
		str++;
	}
	endofnum = skip(str, ft_isdigit) - 1;
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
