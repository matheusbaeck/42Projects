/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 07:39:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/05/03 23:03:57 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// void	print_stacks(int **stacks, int *end)
// {
// 	int	i;
// 	printf("\nSTACK A:  ");
// 	i = -1;
// 	while (++i < end[0])
// 	{
// 		printf("%d ", stacks[0][i]);
// 	}
// 	printf("\nSTACK B:  ");
// 	i = -1;
// 	while (++i < end[1])
// 	{
// 		printf("%d ", stacks[1][i]);
// 	}
// 	printf("\n");
// }

int	main(int argc, char **argv)
{
	int	end[2];
	int	*stacks[2];
	int	i;

	i = 1;
	end[0] = 0;
	while (i < argc)
	{
		end[0] += ft_str_count(argv[i]);
		i++;
	}
	end[1] = 0;
	stacks[0] = ft_get_numbers(argc, end[0], argv);
	stacks[1] = calloc(end[0] + 1, sizeof(*stacks[1]));
	ft_normalize(stacks, end);
	ft_algorythm2(stacks, end);
}
