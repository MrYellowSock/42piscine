#include <unistd.h>
#define MAP_SIZE 128

// return base
int	fill_map(char *mapping, int size, char *base)
{
	int		i;
	char	value;

	i = 0;
	while (i < size)
	{
		mapping[i] = -1;
		i++;
	}
	value = 0;
	while (*base != 0)
	{
		if (mapping[(unsigned char)*base] >= 0)
		{
			return (0);
		}
		mapping[(unsigned char)*base++] = value++;
	}
	return (value);
}

char	*eon(char *str, char *mapping)
{
	if (mapping[(unsigned char)*str] >= 0)
	{
		return (eon(str + 1, mapping));
	}
	else
	{
		return (str - 1);
	}
}

int	invalid_base(char *mapping, int b)
{
	return (b < 2 || (mapping['-'] >= 0 && mapping['+'] >= 0
			&& mapping[' '] >= 0));
}

unsigned int	remove_negative(int nb)
{
	unsigned int	newnb;

	newnb = 0;
	if (nb < 0)
	{
		nb += 1;
		nb *= -1;
		newnb = (unsigned int)nb + 1;
	}
	else
	{
		newnb = nb;
	}
	return (newnb);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			mapping[MAP_SIZE];
	int				pow;
	int				sum;
	int				base_len;
	char			*endofnum;
	unsigned int	value;

	base_len = fill_map(mapping, MAP_SIZE, base);
	if (invalid_base(mapping, base_len))
	{
		return ;
	}
	pow = 1;
	value = remove_negative(nbr);
	if (nbr < 0)
	{
		write(1, "-", 1);
	}
	endofnum = eon(str, mapping);
	while (endofnum >= str)
	{
		sum += pow * mapping[(unsigned char)*endofnum--];
		pow *= base_len;
	}
}
