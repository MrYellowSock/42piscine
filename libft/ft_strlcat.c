#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*m_strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

size_t	ft_strlcat(char *restrict dest, const char *restrict src,
		size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	copylen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	copylen = (dstsize > destlen + 1) ? (dstsize - destlen - 1) : 0;
	m_strncat(dest, src, copylen);
	return (destlen + srclen);
}
