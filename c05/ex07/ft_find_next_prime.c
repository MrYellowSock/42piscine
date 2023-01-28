/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:57:47 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/28 20:19:19 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x0;
	int	x1;

	if (nb <= 1)
		return (0);
	x0 = nb / 2;
	x1 = (x0 + nb / x0) / 2;
	while (x1 < x0)
	{
		x0 = x1;
		x1 = (x0 + nb / x0) / 2;
	}
	if (x0 * x0 == nb)
	{
		return (x0);
	}
	else
	{
		return (0);
	}
	return (x0);
}

int isprime(int number)
{
	if (number < 2) return 0;
	if (number % 2 == 0) return (number == 2);
	int root = (int)ft_sqrt((double)number);
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
	while (!isprime(ans) && ans < 2147483647)
	{
		ans++;
	}
	return (ans);
}
