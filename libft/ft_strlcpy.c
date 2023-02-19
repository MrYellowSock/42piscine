#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	copylen;

	srclen = ft_strlen(src);
	copylen = srclen;
	if (srclen >= dstsize)
	{
		copylen = dstsize - 1;
	}
	if (copylen > 0)
	{
		ft_memcpy(dst, src, copylen);
		dst[copylen] = '\0';
	}
	return (srclen);
}
