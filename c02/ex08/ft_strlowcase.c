/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:56:10 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/19 06:56:11 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper_alpha(char a)
{
	return (a >= 'A' && a <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char	*i;
	char	diff;

	diff = 'a' - 'A';
	i = str;
	while (*i != 0)
	{
		if (is_upper_alpha(*i))
		{
			*i = *i + diff;
		}
		i++;
	}
	return (str);
}
