#include <unistd.h>

int	is_printable(char a)
{
	return (a >= 32);
}

char	tobase16(int n)
{
	char	res;

	res = n + '0';
	if(res > '9')
	{
		res += 'a'- ':';
	}
	return res;
}

void	show_hex(char a)
{
	char	buf[2];

	buf[0] = tobase16(a / 16) ;
	buf[1] = tobase16(a % 16) ;
	write(1, buf, 2);
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
			write(1, "\\", 1);
			show_hex(*str);
		}
		str++;
	}
}
