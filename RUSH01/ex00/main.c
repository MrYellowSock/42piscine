/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:01:12 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/22 17:57:47 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define INPUT_WIDTH 36
#define MODE_MULTI 0

void	gen_comb_ez(int n, void (*callback)(char **, int));

int		*visible_boxes2d(char **arr, int *ans, int size);

int		arr_cmp(int *s1, int *s2, unsigned int n);

void	print2d(char **arr, int size);

void	print1d(char *arr, int size);

int		g_count = 0;

int		g_user_input[INPUT_WIDTH];

// (callback) check if combination is valid then print
void	print_if_ok(char **arr, int size)
{
	int	ans_holder[INPUT_WIDTH];
	int	ans_len;

	ans_len = size * 4;
	visible_boxes2d(arr, ans_holder, size);
	if (arr_cmp(g_user_input, ans_holder, ans_len) == 0 && (g_count == 0
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
