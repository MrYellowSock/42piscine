#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	diff;

	if (n <= 0)
	{
		return (0);
	}
	diff = *s1 - *s2;
	if (*s1 == 0 || *s2 == 0 || diff != 0 || n <= 1)
	{
		return (diff);
	}
	else
	{
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	}
}
