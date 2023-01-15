/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:52:54 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 23:18:56 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUF_LEN 10

int	m_power(int base, int pow)
{
	int	s_c;
	int	s_accumulate;

	s_accumulate = 1;
	s_c = 0;
	while (s_c < pow)
	{
		s_accumulate *= base;
		s_c = s_c + 1;
	}
	return (s_accumulate);
}

int	m_is_uniq(int n, int length)
{
	int	counter[10];
	int	arr[2];
	int	i;

	i = 0;
	while (i < 10)
	{
		counter[i++] = 0;
	}
	arr[0] = 9;
	while (length-- > 0)
	{
		arr[1] = n % 10;
		n = n / 10;
		if (counter[arr[1]] > 0 || arr[1] > arr[0])
		{
			return (0);
		}
		else
		{
			counter[arr[1]] = 1;
		}
		arr[0] = arr[1];
	}
	return (1);
}

char	*into_str(char g_res[BUF_LEN], int n)
{
	int	start;

	start = 0;
	while (start < BUF_LEN)
	{
		g_res[BUF_LEN - start++ - 1] = '0' + (n % 10);
		n /= 10;
	}
	return (g_res);
}

void	ft_print_combn(int n)
{
	int		first;
	int		last;
	int		tot;
	char	g_res[BUF_LEN];

	first = 1;
	tot = 0;
	last = m_power(10, n);
	while (first < last)
	{
		if (m_is_uniq(first, n))
		{
			if (tot > 0)
			{
				write(1, " ,", 2);
			}
			write(2, into_str(g_res, first) + BUF_LEN - n, n);
			tot += 1;
		}
		first = first + 1;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
