size_t	strlen(const char *s)
{
	unsigned int	cnt;

	cnt = 0;
	while (*s != 0)
	{
		cnt++;
		s++;
	}
	return (cnt);
}
