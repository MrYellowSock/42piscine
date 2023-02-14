#include <stdlib.h>

char	*eos(char *s)
{
	if (*s == 0)
	{
		return (s);
	}
	else
	{
		return (eos(s + 1));
	}
}

char	*ft_strcat(char *dest, char *src)
{
	char	*targ;

	targ = eos(dest);
	while (*src != 0)
	{
		*targ = *src;
		src++;
		targ++;
	}
	*targ = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str != 0)
	{
		cnt++;
		str++;
	}
	return (cnt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int	total_size;
	int				i;
	char			*big_chungus;

	total_size = 1 + ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	big_chungus = malloc(total_size * sizeof(char));
	big_chungus[0] = 0;
	i = 0;
	while (i < size)
	{
		if (i > 0)
		{
			ft_strcat(big_chungus, sep);
		}
		ft_strcat(big_chungus, strs[i]);
		i++;
	}
	return (big_chungus);
}

