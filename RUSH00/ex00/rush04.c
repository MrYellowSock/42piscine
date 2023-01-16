/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:35:06 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 19:49:28 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

int	contact_edge(int x, int y, int width, int height)
{
	return (x == width || y == height || x == 1 || y == 1);
}

char	getchar(int x, int y, int width, int height)
{
	int	bottom_right;
	int	top_left;

	bottom_right = (width > 1 && height > 1 && x == width && y == height);
	top_left = (x == 1 && y == 1);
	if (top_left || bottom_right)
	{
		return ('A');
	}
	if ((x == width && y == 1) || (x == 1 && y == height))
	{
		return ('C');
	}
	if (contact_edge(x, y, width, height))
	{
		return ('B');
	}
	return (' ');
}

void	rush(int width, int height)
{
	int		x;
	int		y;
	char	to_print;

	y = 1;
	while (y <= height)
	{
		x = 1;
		while (x <= width)
		{
			to_print = getchar(x, y, width, height);
			ft_putchar(to_print);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
