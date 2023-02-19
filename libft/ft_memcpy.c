#include <stddef.h>

void	*ft_memcpy(void * dst, const void * src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dst);
}
