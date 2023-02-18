void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*mem;
	int				i;

	mem = b;
	i = 0;
	while (i < len)
	{
		mem[i++] = (unsigned char)c;
	}
	return (b);
}
