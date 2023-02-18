#include <stddef.h>
char	*ft_strdup(const char *s1);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char * newone = ft_strdup(s);
	if(newone == NULL)
	{
		return  NULL;
	}
	unsigned int index = 0;
	while (s[index] != 0) {
		newone[index] = f(index, s[index]);
		index++;
	}
}
