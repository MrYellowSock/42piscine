void * memcpy(void *restrict dst, const void *restrict src, int n)
{
	int i = 0;
	while (i < n) {
		dst[i] = src[i];
		i++;
	}
	return dst;
}
