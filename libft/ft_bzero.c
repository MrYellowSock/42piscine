void * memset(void *b, int c, int len);
void ft_bzero(void *s, int n)
{
	memset(s, 0, n);
}

