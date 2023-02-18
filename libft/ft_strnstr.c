#include "libft.h"

// todo : add N
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	n;

	n = ft_strlen(little);
	if (n <= 0)
	{
		return ((char*)big);
	}
	while (*big != 0 && len)
	{
		if (ft_strncmp(big, little, n) == 0)
		{
			return ((char*)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
