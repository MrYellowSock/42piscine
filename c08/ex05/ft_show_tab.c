/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:20:46 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/30 20:29:56 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define OUTPUT_BUF 20

unsigned int	remove_negative(int nb)
{
	unsigned int	newnb;

	newnb = 0;
	if (nb < 0)
	{
		nb += 1;
		nb *= -1;
		newnb = (unsigned int)nb + 1;
	}
	else
	{
		newnb = nb;
	}
	return (newnb);
}

void	ft_putnbr_base(int nbr)
{
	unsigned int	value;
	int				c;
	char			output[OUTPUT_BUF];

	c = 0;
	value = remove_negative(nbr);
	if (nbr < 0)
	{
		write(1, "-", 1);
	}
	while (value > 0 || c == 0)
	{
		output[OUTPUT_BUF - 1 - c++] = (char)(value % 10) + '0';
		value /= 10;
	}
	write(1, &output[OUTPUT_BUF - c], c);
}

void	ft_putstr_nl(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str != 0)
	{
		ft_putstr_nl((*par).str);
		ft_putnbr_base((*par).size);
		ft_putstr_nl("");
		ft_putstr_nl((*par).copy);
		par++;
	}
}
