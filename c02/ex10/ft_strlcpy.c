/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:56:24 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/14 13:51:27 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// BAD DO NOT USE
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (*src != 0 && count < size)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	if (size > 0)
	{
		*dest = 0;
	}
	return (count);
}
