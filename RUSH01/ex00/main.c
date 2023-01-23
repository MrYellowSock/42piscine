/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:01:12 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/23 13:44:30 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define INPUT_WIDTH 36
#define MODE_MULTI 0

void	gen_comb_ez(int n, int (*callback)(char **, int, int));

char	*reverse(char *arr, char *out, int size);

int		*visible_boxes2d(char **arr, int *ans, int size);

int		arr_cmp(int *s1, int *s2, unsigned int n);

void	print2d(char **arr, int size);

void	print1d(char *arr, int size);

void ans_pos(int j, int i,int n, int position[4]);

int	visible_boxes(char *arr, int size);

int		g_count = 0;

int		g_user_input[INPUT_WIDTH];

int		g_size = 0;

// (callback) check if combination is valid then print
int	print_if_ok(char **arr, int w, int h)
{
	int ans_holder[INPUT_WIDTH];
	int ans_len;
	int positions[4];
	int rev_holder[g_size];

	ans_len = g_size * 4;
	// end of table
	if (g_size == w && g_size == h)
	{
		visible_boxes2d(arr, ans_holder, g_size);
		if (arr_cmp(g_user_input, ans_holder, ans_len) == 0 && (g_count == 0
				|| MODE_MULTI))
		{
			print2d(arr, g_size);
			g_count++;
		}
		// does not matter at all
		return (0);
	}
	else
	{
		ans_pos(h-1, w-1, g_size, positions);
		int check = visible_boxes(arr[h-1],g_size);
		reverse(arr[h-1],(char *)rev_holder,g_size);
		int check2 = visible_boxes((char *)rev_holder,g_size);
		return g_user_input[ positions[2] ] == check && g_user_input[positions[3]] == check2;
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
	g_size = received / 4;
	gen_comb_ez(g_size, print_if_ok);
	if (g_count == 0)
	{
		error();
		return (0);
	}
}
