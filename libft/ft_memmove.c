#include <stddef.h>

// dst before src : copy from left to right
// dst after src : copy from right to left
// avoiding overwriting uncopied data (in case of the same block)
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = dst;
	s = src;
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
		{
			*lastd-- = *lasts--;
		}
	}
	return (dst);
}
