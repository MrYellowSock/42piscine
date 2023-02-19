#include "libft.h"
#include <stdio.h>

size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			little_len;
	size_t			big_len;
	long long int	actual_search;
	long long int	i;

	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	actual_search = min(big_len, (long long int)len) - little_len;
	if (little_len == 0)
	{
		return ((char *)big);
	}
	if (actual_search < 0)
	{
		return (NULL);
	}
	i = 0;
	while (i <= actual_search)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
