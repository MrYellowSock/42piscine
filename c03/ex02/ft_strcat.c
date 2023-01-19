/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:28:32 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 09:28:33 by skulkamt         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*targ;

	targ = eos(dest);
	while (*src != 0)
	{
		*targ = *src;
		src++;
		targ++;
	}
	*targ = 0;
	return (dest);
}
