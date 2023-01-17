char	*ft_strcpy(char *dest, char *src)
{
	while (*src != 0)
	{
		*dest = *src;
		src++;
	}
	//include '\0'
}
