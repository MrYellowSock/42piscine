#include "stdio.h"
#define MAX_WIDTH 9
#define INPUT_WIDTH MAX_WIDTH * 4

void	gen_comb_ez(int n, void (*callback)(char **, int));

int		ft_atoi(char *str);

int		*visible_boxes2d(char **arr, int *ans, int size);

int		arr_cmp(int *s1, int *s2, unsigned int n);

int		g_count = 0;

int		g_user_input[INPUT_WIDTH];

void	print2d(char **arr, int size)
{
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}

void	print_if_ok(char **arr, int size)
{
	int	ans_holder[INPUT_WIDTH];

	visible_boxes2d(arr, ans_holder, size);
	if (arr_cmp(g_user_input, ans_holder, size) == 0)
	{
		printf("ANS FOUND!\n");
		g_count++;
	}
}

// return amount of received numbers
int	assign_input(char *str)
{
	char	numb_hold[3];
	int		input_element_pos;
	int		numb_hold_pos;

	input_element_pos = 0;
	numb_hold_pos = 0;
	while (*str != 0)
	{
		if (*str == ' ' && numb_hold_pos > 0)
		{
			numb_hold[numb_hold_pos] = 0;
			numb_hold_pos = 0;
			g_user_input[input_element_pos++] = ft_atoi(numb_hold);
		}
		else
		{
			numb_hold[numb_hold_pos++] = *str;
		}
		str++;
	}
	if (numb_hold_pos > 0)
	{
		numb_hold[numb_hold_pos] = 0;
		g_user_input[input_element_pos++] = ft_atoi(numb_hold);
	}
	return (input_element_pos);
}

int	main(int argc, char **args)
{
	int	received;

	if (argc != 2)
	{
		//Error inproper arg
		return (0);
	}
	received = assign_input(args[1]);
	if (received % 4 != 0 || received < 1)
	{
		// Error input numbers
		return (0);
	}
	gen_comb_ez(received / 4, print_if_ok);
}
