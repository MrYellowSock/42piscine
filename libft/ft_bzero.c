void * memset(void *b, int c, int len);
void bzero(void *s, int n)
{
	memset(s, 0, n);
}

