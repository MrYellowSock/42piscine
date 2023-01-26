/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:57:47 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/26 19:01:01 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	i;

	if (n == 1)
	{
		return (0);
	}
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
	{
		return (2);
	}
	while (!ft_is_prime(nb) && nb < 2147483647)
	{
		nb++;
	}
	return (nb);
}
