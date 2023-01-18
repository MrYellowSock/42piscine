unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*dest_pointing;
	unsigned int	count;

	count = 0;
	dest_pointing = dest;
	while (*src != 0 && count < size)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	if (size > 0)
	{
		*dest = 0;
	}
	return (count);
}
