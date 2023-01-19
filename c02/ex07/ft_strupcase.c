/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:55:22 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 06:55:23 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower_alpha(char a)
{
	return (a >= 'a' && a <= 'z');
}

char	*ft_strupcase(char *str)
{
	char	*i;
	char	diff;

	diff = 'a' - 'A';
	i = str;
	while (*i != 0)
	{
		if (is_lower_alpha(*i))
		{
			*i = (*i - diff);
		}
		i++;
	}
	return (str);
}
