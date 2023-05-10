/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorythm2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:13:18 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/05/10 03:01:53 by mamagalh@st      ###   ########.fr       */
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
		shadow[0] = start_zero;
		start_zero++;
	}
	i = -1;
	while (++i < end[1])
	{
		shadow[1] = start_one;
		start_one++;
	}
	return (shadow);
}

// nb = (stack, index, value)
int ft_get_dislocation(int **stacks, int *end, int **shadow int *nb)
{
	int dis;

	dis = nb[2] - shadow[nb[0]][nb[1]];
	return (dis);
}

ft_get_ref(int **stacks, int *end, int **shadow)
{
	int	best;
	int	i;

	
}

void	ft_algorythm_shadow(int **stacks, int *end)
{
	int	**shadow;

	shadow = ft_get_shadow(end, ft_lowest(stacks, 0, end), ft_lowest(stacks, 1, end));


	i = -1;
	while (++i < 30000 && (ft_is_orded(stacks, 0, end) < end[0] || ft_is_orded(stacks, 1, end) < end[1]))
	{
		ft_splitstacks(stacks, end);
		ft_joinstacks(stacks, end);	
	}
}