/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <
    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 04:30:27 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/19 09:07:50 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	other(int nb)
{
	if (nb == 0)
		return (1);
	return (0);
}

int	ft_swap(int **stacks, int stack, int *end, int mod)
{
	int	temp;

	if (end[stack] > 2)
	{
		temp = stacks[stack][0];
		stacks[stack][0] = stacks[other(stack)][1];
		stacks[other(stack)][1] = temp;
		if (mod == 0)
		{
			if (stack == 0)
				write(1, "sa\n", 3);
			else
				write(1, "sb\n", 3);
		}
		else if (mod == 2)
		{
			if (ft_swap(stacks, other(stack), end, 1))
				write(1, "ss\n", 3);
			else
				printf("erro\n");
		}
		return (1);
	}
	return (0);
}

int	ft_push(int **stacks, int stack, int *end, int mod)
{
	if (end[stack] > 1)
	{
		stacks[other(stack)][end[other(stack)] + 1] = stacks[stack][end[stack]]; //stacks[!stack]
		stacks[stack][end[stack]] = 0;
		end[other(stack)]++;
		end[stack]--;
		if (mod == 0)
		{
			if (stack == 0)
				write(1, "pa\n", 3);
			else
				write(1, "pb\n", 3);
		}
		else if (mod == 2)
		{
			if (ft_swap(stacks, other(stack), end, 1))
				write(1, "pp\n", 3);
			else
				printf("erro");
		}
		return (1);
	}
	return (0);
}

int	ft_rotate(int **stacks, int stack, int *end, int mod)
{
	int	temp;
	int	i;

	i = -1;
	temp = stacks[stack][0];
	while (++i < end[stack])
		stacks[stack][i] = stacks[stack][i + 1];
	stacks[stack][end[stack]] = temp;
	if (mod == 0)
	{
		if (stack == 0)
			write(1, "ra\n", 3);
		else
			write(1, "rb\n", 3);
	}
	else if (mod == 2)
	{
		if (ft_swap(stacks, other(stack), end, 1))
			write(1, "rr\n", 3);
	}
	return (1);
}

int	ft_rev_rotate(int **stacks, int stack, int *end, int mod)
{
	int	temp;
	int	i;

	i = end[stack] + 1;
	temp = stacks[stack][end[stack]];
	while (--i > 0)
		stacks[stack][i] = stacks[stack][i - 1];
	stacks[stack][0] = temp;
	if (mod == 0)
	{
		if (stack == 0)
			write(1, "rra\n", 4);
		else
			write(1, "rrb\n", 4);
	}
	else if (mod == 2)
	{
		if (ft_swap(stacks, other(stack), end, 1))
			write(1, "rrr\n", 4);
	}
	return (1);
}
