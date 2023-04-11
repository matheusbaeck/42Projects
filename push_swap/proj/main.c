/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 07:39:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/04/08 13:09:10 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	print_stacks(int **stacks, int *end)
{
	int i;

	printf("\nSTACK A:  ");
	i = -1;
	while (++i < end[0])
	{
		printf("%d ", stacks[0][i]);
	}
	printf("\nSTACK B:  ");
	i = -1;
	while (++i < end[1])
	{
		printf("%d ", stacks[1][i]);
	}
}

int	main(int argc, char **argv)
{
	int	end[2];
	int	*stacks[2];
	int i;


	if (!ft_check_isalldigit(argc, argv))
		return (write(1, "Error\n", 6), 0);
	i = 1;
	end[0] = 0;
	while (i < argc)
	{
		end[0] += ft_str_count(argv[i]);
		i++;
	}
	end[1] = 0;
	stacks[0] = ft_get_numbers(argc, end[0], argv);
	//stacks[1] = calloc(end[0] + 1, sizeof(*stacks[1]));
	
	ft_algorythm(stacks, end);
	print_stacks(stacks, end);
	return (0);
}
