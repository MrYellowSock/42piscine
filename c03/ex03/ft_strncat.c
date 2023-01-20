/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:28:38 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/20 13:16:20 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*eos(char *s)
{
	if (*s == 0)
	{
		return (s);
	}
	else
	{
		return (eos(s + 1));
	}
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*targ;
	unsigned int	count;

	targ = eos(dest);
	count = 0;
	while (*src != 0 && count < nb)
	{
		*targ = *src;
		src++;
		targ++;
		count++;
	}
	*targ = 0;
	return (dest);
}
