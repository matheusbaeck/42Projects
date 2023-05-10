/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 07:39:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/05/09 21:13:14 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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
	if (end[0] == 3)
		ft_algorythm_3n(stacks, 0, end);
	else if (end[0] == 5)
		ft_algorythm_5n(stacks, 0, end);
	else if (end[0] <= 100)
		ft_algorythm2(stacks, end);
	else
		ft_algorythm_radix(stacks, end);
}
