#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, int n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srclen;
	size_t	copylen;

	srclen = ft_strlen(src);
	copylen = (srclen >= dstsize) ? (dstsize - 1) : srclen;
	ft_memcpy(dst, src, copylen);
	dst[copylen] = '\0';
	return (srclen);
}
