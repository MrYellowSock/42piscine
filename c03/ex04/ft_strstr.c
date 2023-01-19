/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:28:44 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 09:29:31 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff;

	diff = *s1 - *s2;
	if (*s1 == 0 || *s2 == 0 || diff != 0 || n <= 1)
	{
		return (diff);
	}
	else
	{
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	n;

	n = ft_strlen(to_find);
	while (*str != 0)
	{
		if (ft_strncmp(str, to_find, n) == 0)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
