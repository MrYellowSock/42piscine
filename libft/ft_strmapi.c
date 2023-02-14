char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int index = 0;
	while (s[index] != 0) {
		s[index] = f(index, s[index]);
		index++;
	}
}
