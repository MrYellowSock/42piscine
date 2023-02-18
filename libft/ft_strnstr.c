#include <unistd.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
// todo : add N
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	n;

	n = ft_strlen(little);
	if (n <= 0)
	{
		return (big);
	}
	while (*big != 0 && len)
	{
		if (ft_strncmp(big, little, n) == 0)
		{
			return (big);
		}
		big++;
		len--;
	}
	return (NULL);
}
