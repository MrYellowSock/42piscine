/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:01:12 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/22 16:00:57 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define INPUT_WIDTH 36
#define MODE_MULTI 0

void	gen_comb_ez(int n, void (*callback)(char **, int));

int		*visible_boxes2d(char **arr, int *ans, int size);

int		arr_cmp(int *s1, int *s2, unsigned int n);

int		g_count = 0;

int		g_user_input[INPUT_WIDTH];

// display 2d square array.
void	print2d(char **arr, int size)
{
	int		j;
	int		i;
	char	x;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (i > 0)
			{
				write(1, " ", 1);
			}
			x = '0' + arr[j][i] + 1;
			write(1, &x, 1);
			i = i + 1;
		}
		j = j + 1;
		write(1, "\n", 1);
	}
}

// (callback) check if combination is valid then print
void	print_if_ok(char **arr, int size)
{
	int	ans_holder[INPUT_WIDTH];

	visible_boxes2d(arr, ans_holder, size);
	if (arr_cmp(g_user_input, ans_holder, size) == 0 && (g_count == 0
			|| MODE_MULTI))
	{
		print2d(arr, size);
		g_count++;
	}
}

// return amount of received numbers
int	assign_input(char *str)
{
	int	input_element_pos;

	input_element_pos = 0;
	while (*str != 0)
	{
		if (*str >= '0' && *str <= '9')
		{
			g_user_input[input_element_pos++] = (*str - '0');
		}
		str++;
	}
	return (input_element_pos);
}

void	error(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char **args)
{
	int	received;

	if (argc != 2)
	{
		error();
		return (0);
	}
	received = assign_input(args[1]);
	if (received % 4 != 0 || received < 1)
	{
		error();
		return (0);
	}
	gen_comb_ez(received / 4, print_if_ok);
	if (g_count == 0)
	{
		error();
		return (0);
	}
}
