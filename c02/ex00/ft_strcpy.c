char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_pointing;

	dest_pointing = dest;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (dest_pointing);
}
