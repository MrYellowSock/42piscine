#include "libft.h"
int	is_space(char x)
{
	return (x == '\t' || x == '\n' || x == '\v' || x == '\f' || x == '\r'
		|| x == ' ');
}

int	is_number(char a)
{
	return (a >= '0' && a <= '9');
}

const char	*skip_space(const char *str)
{
	while (*str != 0 && is_space(*str))
	{
		str++;
	}
	return (str);
}

const char	*eon(const char *str)
{
	if (is_number(*str))
	{
		return (eon(str + 1));
	}
	else
	{
		return (str - 1);
	}
}

int	ft_atoi(const char *str)
{
	const char	*endofnum;
	int			pow;
	int			sum;

	sum = 0;
	pow = 1;
	str = skip_space(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			pow *= -1;
		}
		str++;
	}
	endofnum = eon(str);
	while (endofnum >= str)
	{
		sum += pow * (*endofnum - '0');
		endofnum--;
		pow *= 10;
	}
	return (sum);
}
