#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	tocheck;
	size_t	i;

	tocheck = ft_strlen(s);
	i = 0;
	while (i <= tocheck)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
