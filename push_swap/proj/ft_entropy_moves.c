/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_entropy_moves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:12:28 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/05/14 19:29:22 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_do_push(int **stacks, int stack, int *end, int **shadow)
{
	if (stack == 0)
	{
		ft_push(shadow, stack, shadow[2], 3);
		ft_push(stacks, stack, end, 0);
	}
	else
	{
		ft_push(stacks, stack, end, 0);
	}
}

void	ft_do_rotate(int **stacks, int **shadow, int stack, int target)
{
	int	dist;
	int	(*move)(int **, int, int *, int);

	dist = ft_is_in(stacks, stack, stacks[2], target);
	if (dist >= 0)
	{
		if (dist > (stacks[2][0] / 2))
		{
			move = ft_rev_rotate;
			dist = stacks[2][stack] - dist;
		}
		else
			move = ft_rotate;
		while (dist >= 0 && dist-- > 0)
		{
			(*move)(stacks, stack, stacks[2], 0);
			(*move)(shadow, stack, stacks[2], 3);
		}
	}
}

void	ft_do_followed(int **stacks, int **shadow, int i)
{
	int	entropy;

	entropy = stacks[0][0] - shadow[0][0];
	ft_do_rotate(stacks, shadow, 0, stacks[0][i]);
	while (entropy-- > 0)
		ft_do_push(stacks, 0, stacks[2], shadow);
}
// void	ft_do_push_back(int **stacks, int *end, int **shadow, int target)
// {

// }