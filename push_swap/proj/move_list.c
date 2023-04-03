/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:57:14 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/04/03 12:09:30 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_newm_ove(int **stacks, int stack, int *end, int mod,
		void (*fptr)(int **stacks, int stack, int *end, int mod))
{
	ps_list	*move;

	move = (ps_list *)malloc(sizeof(*move));
	if (!move)
		return (0);
	move->stacks = stacks;
	move->stack = stack;
	
	return (move);
}