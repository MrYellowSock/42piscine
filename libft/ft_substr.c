#include "libft.h"

size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	char	*newone;
	size_t	i;

	s += min(start, ft_strlen(s));
	n = min(len, ft_strlen(s));
	newone = ft_calloc((n + 1) , sizeof(char));
	if (newone == NULL)
	{
		return (newone);
	}
	i = 0;
	while (i < n)
	{
		newone[i] = s[i];
		i++;
	}
	return (newone);
}
