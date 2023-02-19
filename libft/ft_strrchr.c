#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	tocheck;
	char	*lastok;
	size_t	i;

	lastok = NULL;
	tocheck = ft_strlen(s);
	i = 0;
	while (i <= tocheck)
	{
		if (s[i] == (char)c)
		{
			lastok = ((char *)&s[i]);
		}
		i++;
	}
	return (lastok);
}
