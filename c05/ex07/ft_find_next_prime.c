/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:57:47 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/29 13:22:32 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int    close_sqrt(int nb)
{
    int    i;

    i = 1;
    if (nb == 1)
        return (nb);
    while (i <= nb / i)
    {
        i++;
    }
    return (i);
}

int ft_is_prime(int number)
{
	if (number < 2) return 0;
	if (number % 2 == 0) return (number == 2);
	int root = (int)close_sqrt((double)number);
	for (int i = 3; i <= root; i += 2)
	{
		if (number % i == 0) return 0;
	}
	return 1;
}

int	ft_find_next_prime(int nb)
{
	int	ans;

	ans = nb;
	if (ans < 2)
	{
		ans = 2;
	}
	while (!ft_is_prime(ans) && ans < 2147483647)
	{
		ans++;
	}
	return (ans);
}
