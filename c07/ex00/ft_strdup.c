#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		n;
	char	*newone;
	int		i;

	n = ft_strlen(src);
	newone = malloc((n + 1) * sizeof(char));
	i = 0;
	while (i < n)
	{
		newone[i] = src[i];
		i++;
	}
	newone[n] = 0;
	return (newone);
}
