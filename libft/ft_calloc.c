#include "libft.h"

int	is_overflow(size_t a, size_t b)
{
	size_t	result;

	// Check if either of them is zero
	if (a == 0 || b == 0)
		return (0);
	result = a * b;
	if (a == result / b)
		return (0);
	else
		return (1);
}
void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	if (is_overflow(count, size))
	{
		return (NULL);
	}
	totalsize = count * size;
	ptr = malloc(totalsize);
	if (ptr != NULL)
	{
		ft_bzero(ptr, totalsize);
	}
	return (ptr);
}
