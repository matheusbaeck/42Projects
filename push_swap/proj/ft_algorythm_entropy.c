/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorythm_entropy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:13:18 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/05/12 00:37:39 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int **ft_get_shadow(int *end, int start_zero, int start_one)
{
	int **shadow;
	int i;

	shadow = (int **)malloc(2 * sizeof(int *));
	shadow[0] = (int *)malloc(end[0] * sizeof(int));
	shadow[1] = (int *)malloc(end[1] * sizeof(int));
	i = -1;
	while (++i < end[0])
	{
		shadow[0][i] = start_zero;
		start_zero++;
	}
	i = -1;
	while (++i < end[1])
	{
		shadow[1][i] = start_one;
		start_one++;
	}
	return (shadow);
}

int	ft_abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}

int	ft_get_entropy(int **stacks,int stack, int *end, int **shadow)
{
	int ref;
	int	entropy;
	int temp;
	int	i;
	int j;

	entropy = INT_MAX;
	temp = 0;
	j = -1;
	while (++j < end[stack])
	{	
		i = -1;
		while (++i < end[stack])
			temp += ft_abs(stacks[stack][i] - shadow[stack][i]);
		if (temp < entropy)
		{
			entropy = temp;
			ref = shadow[stack][i];
		}
		ft_rotate(shadow, stack, end, 3);
	}
	while (shadow[stack][i] != ref)
		ft_rotate(shadow, stack, end, 3);
	return (entropy);
	
}

int	ft_do_push_back(int **stacks, int stack, int *end, int target)
{
	int i;

	i = 0;
	while (i < end[stack] && stacks[stack][i] != target)
		++i;
	if (stacks[stack][i] != target)
		return  (0);
	if (i <= (end[stack] / 2))
		while (stacks[0][0] != target)
			ft_rotate(stacks, stack, end, 0);
	else
		while (stacks[0][0] != target)
			ft_rev_rotate(stacks, stack, end, 0);
	if (stacks[0][0] == target)
		return (ft_push(stacks, stack, end, 0), 1);
	else
		return (-1);
}

void	ft_do_rotate(int **stacks, int *end, int **shadow, int target)
{
	int	i;

	i = 0;
	while (i > end[0] && stacks[0][i] != target)
		++i;
	if (i <= (end[0] / 2))

}

int	ft_is_in(int **stacks, int stack, int *end, int target)
{
	int i;

	if (end[stack] < 0)
		return (-1);
	i = -1;
	while (++i < end[stack])
	{
		if (stacks[stack][i] == target)
			return (i);
	}
	return (-1);
}

void	ft_algorythm_entropy(int **stacks, int *end)
{
	int	**shadow;
	int entropy[2];
	int  i;

	shadow = ft_get_shadow(end, ft_lowest(stacks, 0, end), ft_lowest(stacks, 1, end));
	entropy[0] = ft_get_entropy(stacks, 0, end, shadow);
	//entropy[1] = ft_get_entropy(stacks, 1, end, shadow);
	i = -1;
	while (++i < 20000)
	{
		if (ft_is_in(stacks, 1, end, (stacks[0][0] - 1)) >= 0)
			ft_do_push_back(stacks, 1, end, (stacks[0][0] - 1));
		else if ((stacks[0][0] - shadow[0][0]) < 0 && (stacks[0][0] - shadow[0][0]) > (stacks[0][1] - shadow[0][1]))
			ft_swap(stacks, stack, end, 0);
		else if ((stacks[0][i] - shadow[0][i]) > 0 && (end[0] - ((end[1] * 3) / 2) + stacks[0][0]) > 0)
			ft_push(stacks, 0, end, 0);
		else
			ft_rotate(stacks, 0, end, 0);
	}
}