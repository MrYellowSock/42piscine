#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newone;
	unsigned int	index;

	newone = ft_strdup(s);
	if (newone == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (s[index] != 0)
	{
		newone[index] = f(index, s[index]);
		index++;
	}
	return newone;
}
