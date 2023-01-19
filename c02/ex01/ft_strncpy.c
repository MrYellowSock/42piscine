/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:54:39 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 06:54:43 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_pointing;
	unsigned int	count;

	count = 0;
	dest_pointing = dest;
	while (*src != 0 && count < n)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	while (count < n)
	{
		*dest = 0;
		dest++;
		count++;
	}
	return (dest_pointing);
}
