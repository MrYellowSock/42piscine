void	*ft_memset(void *b, int c, int len);
void	ft_bzero(void *s, int n)
{
	ft_memset(s, 0, n);
}
