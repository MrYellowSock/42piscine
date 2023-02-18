#include "libft.h"

const char	*eos(const char *s)
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
	const char	*e;

	e = eos(s);
	while (e >= s)
	{
		if (*e == c)
		{
			return ((char *)e);
		}
		e--;
	}
	return (NULL);
}
