/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:57:47 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/28 19:00:05 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb, int i)
{
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	if (nb <= 1)
	{
		return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	ans;

	ans = nb;
	while (!ft_is_prime(ans, 2) && ans <= 2 * nb + 1)
	{
		ans++;
	}
	return (ans);
}
