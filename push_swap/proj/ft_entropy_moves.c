/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_entropy_moves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:12:28 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/05/13 05:20:15 by mamagalh@st      ###   ########.fr       */
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

void	ft_do_rotate(int **stacks, int *end, int **shadow, int target)
{
	int	dist;
	int	stack;
	int	(*move)(int **, int, int *, int);

	dist = ft_is_in(stacks, 1, end, target);
	if (dist >= 0)
		stack = 1;
	else
	{
		dist = ft_is_in(stacks, 0, end, target) >= 0;
		if (dist >= 0)
			stack = 0;
	}
	move = ft_rotate;
	if (dist > (end[0] / 2))
		move = ft_rev_rotate;
	while (dist-- > 0)
	{
		(*move)(stacks, stack, end, 0);
		(*move)(shadow, stack, end, 3);
	}
}
