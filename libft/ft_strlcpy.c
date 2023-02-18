#include "libft.h"

void	*ft_memcpy(void * dst, const void * src, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t	srclen;
	size_t	copylen;

	srclen = ft_strlen(src);
	copylen = (srclen >= dstsize) ? (dstsize - 1) : srclen;
	ft_memcpy(dst, src, copylen);
	dst[copylen] = '\0';
	return (srclen);
}
