/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:57:47 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/29 14:57:14 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	close_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (nb);
	while (i <= nb / i)
	{
		i++;
	}
	return (i);
}

int	ft_is_prime(int number)
{
	int	root;
	int	i;

	if (number < 2)
		return (0);
	if (number % 2 == 0)
		return (number == 2);
	root = close_sqrt(number);
	i = 3;
	while (i <= root)
	{
		if (number % i == 0)
			return (0);
		i += 2;
	}
	return (1);
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
