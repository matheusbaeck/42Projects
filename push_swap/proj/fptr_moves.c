/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fptr_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:28:55 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/04/03 15:34:08 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_pa(int **stacks, int *end);
{
	ft_push(stacks, 0, end, 0);
}

void	ft_pb(int **stacks, int *end);
{
	ft_push(stacks, 1, end, 0);
}

void	ft_ra(int **stacks, int *end);
{
	ft_rotate(stacks, 0, end, 0);
}

void	ft_rb(int **stacks, int *end);
{
	ft_rotate(stacks, 1, end, 0);
}

void	ft_rra(int **stacks, int *end);
{
	ft_rotate(stacks, 0, end, 0);
}

void	ft_rrb(int **stacks, int *end);
{
	ft_rotate(stacks, 1, end, 0);
}