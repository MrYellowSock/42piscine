#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	const char	*start;
	const char	*end;
	size_t		new_len;
	char		*new_str;

	len = ft_strlen(s1);
	start = s1;
	end = s1 + len - 1;
	while (*start && ft_strchr(set, *start))
	{
		start++;
	}
	while (end > start && ft_strchr(set, *end))
	{
		end--;
	}
	new_len = end - start + 1;
	new_str = malloc(new_len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (size_t i = 0; i < new_len; i++)
	{
		new_str[i] = start[i];
	}
	new_str[new_len] = '\0';
	return (new_str);
}
