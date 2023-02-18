#include "libft.h"

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

char	*strrchr(const char *s, int c)
{
	char	*e;

	e = eos(s);
	while (e >= s)
	{
		if (*e == c)
		{
			return (e);
		}
		e--;
	}
	return (NULL);
}
