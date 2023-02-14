/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:28:57 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/14 13:55:09 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// BAD do not copy
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	dest_size_old;
	unsigned int	src_size;

	src_size = 0;
	dest_size_old = 0;
	while (*dest != 0)
	{
		dest++;
		dest_size_old++;
	}
	dest_size = dest_size_old + 1;
	while (*src != 0)
	{
		if (dest_size < size)
		{
			*dest = *src;
			dest++;
			dest_size++;
		}
		src++;
		src_size++;
	}
	*dest = 0;
	return (src_size + dest_size_old);
}
