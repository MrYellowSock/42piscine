#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	getsuitable_size(const char *str, size_t maxlen)
{
	size_t	n;

	n = ft_strlen(str);
	if (n > maxlen)
	{
		n = maxlen;
	}
	return (n);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	char	*newone;
	int		i;

	s += start;
	n = getsuitable_size(s, len);
	newone = malloc((n + 1) * sizeof(char));
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
	newone[n] = 0;
	return (newone);
}
