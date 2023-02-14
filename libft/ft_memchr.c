void * memchr(const void *s, int c, int n)
{
	int pos = 0;
	while (pos < n)
	{
		if (s[pos] == (unsigned char)c) {
			return &s[pos];
		}
	}
	return NULL;
}
