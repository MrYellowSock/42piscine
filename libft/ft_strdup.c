#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newone;

	n = ft_strlen(s1);
	newone = malloc((n + 1) * sizeof(char));
	if (newone == NULL)
	{
		return (newone);
	}
	i = 0;
	while (i < n)
	{
		newone[i] = s1[i];
		i++;
	}
	newone[n] = 0;
	return (newone);
}
