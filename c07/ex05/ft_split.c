/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:37:24 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/02 19:23:49 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	contains(char needle, char *hay)
{
	while (*hay != 0)
	{
		if (*hay == needle)
		{
			return (1);
		}
		hay++;
	}
	return (0);
}

unsigned int	count_words(char *start, char *charset)
{
	unsigned int	count;
	int				prev_is_sep;
	int				cur_is_sep;

	prev_is_sep = 1;
	count = 0;
	while (*start != 0)
	{
		cur_is_sep = contains(*start, charset);
		if (prev_is_sep && !cur_is_sep)
		{
			count++;
		}
		prev_is_sep = cur_is_sep;
		start++;
	}
	return (count);
}

unsigned int	world_len(char *start, char *charset)
{
	unsigned int	len;

	len = 0;
	while (*start != 0 && !contains(*start, charset))
	{
		len++;
		start++;
	}
	return (len);
}

char	*copy_next(char **target, char *str, int wl)
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

char	**ft_split(char *str, char *charset)
{
	unsigned int	total;
	char			**results;
	unsigned int	i;
	int				wl;

	total = count_words(str, charset);
	results = malloc((total + 1) * sizeof(char *));
	results[total] = 0;
	i = 0;
	while (*str != 0 && i < total)
	{
		wl = world_len(str, charset);
		if (wl > 0)
		{
			str = copy_next(results + i, str, wl);
			i++;
		}
		else
		{
			str++;
		}
	}
	return (results);
}
