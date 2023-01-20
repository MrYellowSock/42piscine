/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:28:57 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/20 14:02:03 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	str_len(char *s)
{
	unsigned int	count;

	count = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	src_index;

	if(size == 0)
	{
		return 0;
	}

	dest_size = str_len(dest);
	src_size = str_len(src);
	src_index = 0;

	while(*(src+src_index) != 0 && (dest_size + src_index < size))
	{
		*(dest + src_index) = *(src+src_index);
		src_index++;
	}
	if (src_index >= dest_size)
	{
		*(dest + src_index) = 0;
	}
	return dest_size + src_size;
}
// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	unsigned int	dest_size;
// 	unsigned int	dest_size_old;
// 	unsigned int	src_size;
//
// 	src_size = 0;
// 	dest_size_old = 0;
// 	while (*dest != 0)
// 	{
// 		dest++;
// 		dest_size_old++;
// 	}
// 	dest_size = dest_size_old + 1;
// 	while (*src != 0)
// 	{
// 		if (dest_size < size)
// 		{
// 			*dest = *src;
// 			dest++;
// 			dest_size++;
// 		}
// 		src++;
// 		src_size++;
// 	}
// 	*dest = 0;
// 	return (src_size + dest_size_old * (size > 0));
// }
