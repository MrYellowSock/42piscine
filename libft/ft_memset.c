#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;
	size_t			i;

	mem = b;
	i = 0;
	while (i < len)
	{
		mem[i++] = (unsigned char)c;
	}
	return (b);
}
