#include "libft.h"

// if 0 then n will overflow after subtraction
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	src_size;

	src_size = ft_strlen(src);
	n = dstsize;
	while (n != 0 && --n > 0)
	{
		if ((*dst++ = *src++) == '\0')
			break ;
	}
	if (n == 0 && dstsize != 0)
	{
		*dst = '\0';
	}
	return (src_size);
}
