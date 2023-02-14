void * memset(void *b, int c, int len)
{
	int i = 0;
	while (i < len) {
		b[i++] = (unsigned char)c; 
	}
	return b;
}
