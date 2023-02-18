void	*ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
