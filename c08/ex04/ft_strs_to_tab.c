/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:20:19 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/30 22:04:50 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *src)
{
	int		n;
	char	*newone;
	int		i;

	n = ft_strlen(src);
	newone = malloc((n + 1) * sizeof(char));
	if (newone == NULL)
	{
		return (newone);
	}
	i = 0;
	while (i < n)
	{
		newone[i] = src[i];
		i++;
	}
	newone[n] = 0;
	return (newone);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*bummer;
	int					i;

	bummer = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!bummer)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		bummer[i].size = ft_strlen(av[i]);
		bummer[i].str = av[i];
		bummer[i].copy = ft_strdup(av[i]);
		if (!bummer[i].str || !bummer[i].copy)
		{
			return (NULL);
		}
		i++;
	}
	bummer[ac].str = 0;
	bummer[ac].copy = 0;
	return (bummer);
}
