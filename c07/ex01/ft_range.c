#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*jumbo;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		return (NULL);
	}
	i = 0;
	jumbo = malloc(size * sizeof(int));
	if (jumbo == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		jumbo[i++] = min++;
	}
	return (jumbo);
}
