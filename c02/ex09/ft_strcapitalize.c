/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:56:18 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/14 13:51:57 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alp(char x)
{
	return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}

char	to_lower(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (a + ('a' - 'A'));
	}
	else
	{
		return (a);
	}
}

char	to_upper(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (a - ('a' - 'A'));
	}
	else
	{
		return (a);
	}
}

// BAD do not use
char	*ft_strcapitalize(char *str)
{
	char	*i;

	i = str;
	while (*i != 0)
	{
		if (ft_is_alp(*i) && (i == str || !ft_is_alp(*(i - 1))))
		{
			*i = to_upper(*i);
		}
		else if (ft_is_alp(*i))
		{
			*i = to_lower(*i);
		}
		i++;
	}
	return (str);
}
