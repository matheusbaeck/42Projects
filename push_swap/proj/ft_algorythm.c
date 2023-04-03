/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorythm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:49:24 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/04/03 21:43:41 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_algorythm_test(int **stacks, int *end)
{
	int	count;

	count = 0;
	while (count < 10)
	{
		ft_push(stacks, 0, end, 0);
		ft_push(stacks, 0, end, 0);
		ft_push(stacks, 0, end, 0);
		ft_push(stacks, 0, end, 0);
		ft_push(stacks, 0, end, 0);
		ft_push(stacks, 0, end, 0);
		ft_push(stacks, 0, end, 0);
		ft_push(stacks, 0, end, 0);
		ft_push(stacks, 0, end, 0);
		count++;
	}
	count = 0;
	while (count < 10)
	{
		ft_push(stacks, 1, end, 0);
		count++;
	}
}

int	ft_is_orded(int **stacks, int stack, int *end, int mod)
{
	int	i;

	i = 0;
	if (mod == 1)
	{
		while ((i) < (end[stack]) && stacks[stack][i] > stacks[stack][i + 1])
			i++;
	}
	else if (mod == -1)
	{
		while ((i) < (end[stack]) && stacks[stack][i] > stacks[stack][i + 1])
			i++;
	}	
	return (i);
}

int	ft_radix_skip(int **stacks, int stack, int *end, int magnitude)
{
	int	moves_skiped;
	int	i;

	moves_skiped = end[stack];
	i = 0;
	while (i++ < end[stack] && moves_skiped == end[stack])
	{
		if (((stacks[stack][i] >> magnitude) & 1) == stack)
		{
			moves_skiped = i;
			if (i > (end[stack] / 2))
				while (i++ < end[stack])
					ft_rev_rotate(stacks, stack, end, 0);
			else
				moves_skiped = 0 ;
		}
	}
	return (moves_skiped);
}

int	ft_radix(int **stacks, int stack, int *end, int magnitude)
{
	int	moves_count;
	int	i;

	i = -1;
	moves_count = end[stack];
	while (moves_count > 0)
	{
		//moves_count -= ft_radix_skip(stacks, stack, end, magnitude);
		if (((stacks[stack][0] >> magnitude) & 1) && moves_count > 0)
			ft_push(stacks, stack, end, 0);
		else if (moves_count > 0)
			ft_rev_rotate(stacks, stack, end, 0);
		moves_count--;
	}
	return (magnitude);
}

void	ft_algorythm(int **stacks, int *end)
{
	int	radix_count;
	int	radix_max;

	radix_count = 2;
	radix_max = 1;
	while ((radix_max * radix_count) < end[0])
		radix_max++;
	radix_count = 0;
	while (radix_count < radix_max)
	{
		ft_radix(stacks, 0, end, radix_count);
		ft_radix(stacks, 1, end, radix_count);
		radix_count++;
	}
	// while (end[1] > 0)
	// {
	// 	//ft_rev_rotate(stacks, 1, end, 0);
	// 	//ft_push(stacks, 1, end, 0);
	// }
}
