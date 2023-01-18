char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_pointing;
	unsigned int	count;

	count = 0;
	dest_pointing = dest;
	while (*src != 0 && count < n)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	while (count < n)
	{
		*dest = 0;
		dest++;
		count++;
	}
	return (dest_pointing);
}
