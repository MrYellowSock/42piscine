#include "libft.h"

// if it works, don't touch it
int	contains(char needle, char hay)
{
	return (needle == hay);
}

unsigned int	count_words(const char *start, char sep)
{
	unsigned int	count;
	int				prev_is_sep;
	int				cur_is_sep;

	prev_is_sep = 1;
	count = 0;
	while (*start != 0)
	{
		cur_is_sep = contains(*start, sep);
		if (prev_is_sep && !cur_is_sep)
		{
			count++;
		}
		prev_is_sep = cur_is_sep;
		start++;
	}
	return (count);
}

unsigned int	world_len(const char *start, char sep)
{
	unsigned int	len;

	len = 0;
	while (*start != 0 && !contains(*start, sep))
	{
		len++;
		start++;
	}
	return (len);
}

const char	*copy_next(char **target, const char *str, int wl)
{
	int	j;

	*target = malloc((wl + 1) * sizeof(char));
	(*target)[wl] = 0;
	j = 0;
	while (j < wl)
	{
		(*target)[j++] = *str++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	total;
	char			**results;
	unsigned int	i;
	int				wl;

	total = count_words(s, c);
	results = malloc((total + 1) * sizeof(char *));
	results[total] = 0;
	i = 0;
	while (*s != 0 && i < total)
	{
		wl = world_len(s, c);
		if (wl > 0)
		{
			s = copy_next(results + i, s, wl);
			i++;
		}
		else
		{
			s++;
		}
	}
	return (results);
}
