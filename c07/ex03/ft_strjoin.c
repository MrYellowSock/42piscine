int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str != 0)
	{
		cnt++;
		str++;
	}
	return (cnt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int	total_size;
	int				i;

	total_size = 1 + ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	//here
}
