/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:14:12 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/26 14:14:13 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	diff = *s1 - *s2;
	if (*s1 == 0 || *s2 == 0 || diff != 0)
	{
		return (diff);
	}
	else
	{
		return (ft_strcmp(s1 + 1, s2 + 1));
	}
}

void	ft_swap(char **i, char **d)
{
	char	*t;

	t = *d;
	*d = *i;
	*i = t;
}

void	ft_sort_str(char **strings, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(strings[i], strings[i + 1]) > 0)
		{
			ft_swap(&strings[i], &strings[i + 1]);
			i = 0;
			continue ;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	cur_param;

	cur_param = 1;
	ft_sort_str(argv + 1, argc - 1);
	while (cur_param < argc)
	{
		ft_putstr(argv[cur_param]);
		ft_putstr("\n");
		cur_param++;
	}
	return (0);
}
