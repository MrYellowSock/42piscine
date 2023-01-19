/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:28:57 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 10:19:22 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	count;

	count = 0;
	while (*dest != 0)
	{
		dest++;
		count++;
	}
	while (*src != 0)
	{
		if (count < size)
		{
			*dest = *src;
		}
		src++;
		dest++;
		count++;
	}
	*dest = 0;
	return (count);
}
