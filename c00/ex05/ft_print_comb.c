/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:13:57 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/13 12:06:30 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uniq(char arr[3])
{
	return (arr[0] < arr[1] && arr[1] < arr[2]);
}

void	increase(char arr[3], int position)
{
	if (position < 3 && position >= 0)
	{
		if (arr[position] < '9')
		{
			arr[position] = arr[position] + 1;
		}
		else if (arr[position] == '9')
		{
			arr[position] = '0';
			increase(arr, position - 1);
		}
	}
}

void	ft_print_comb(void)
{
	char	combs[3];
	int		count;
	int		count_uniq;

	combs[0] = '0';
	combs[1] = '0';
	combs[2] = '0';
	count = 0;
	count_uniq = 0;
	while (count < 999)
	{
		count = count + 1;
		increase(combs, 2);
		if (!is_uniq(combs))
		{
			continue ;
		}
		if (count_uniq > 0)
		{
			write(1, ", ", 2);
		}
		write(1, &combs, 3);
		count_uniq = count_uniq + 1;
	}
}

void	main(void)
{
	ft_print_comb();
}
