/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:41:41 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/10 23:50:57 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ft_mov_set()
{
	void (*fptr)()
	if (mv == '')
		fptr = ;
	else
		return (0);
}

int	ft_get_numbers(int argc, char ***argv)
{
	char	*numbers[argc];
	int		iter;

	ft_bzeros(numbers, argc);
	while (iter > 0)
	{
		numbers[iter] = ft_atoi(argv[iter]);
		iter++;
	}
	return (iter);
}

int	ft_get_arg(int size, char **argv)
{

}

int	ft_arg_count(char *argv)
{
	static int	count;

	while (*argv)
	{
		if (*argv == ' ')
		{
			if (argv[1] && argv[1] != ' ')
				count++;
		}
		argv++;
	}
	return (count);
}

void	ft_push_swap(int argc, char **argv)
{
	int	iter;
	iter = 0;
	while (iter < argc)
	{
		ft_arg_count(*argv)
	}
	ft_get_numbers(argc, &argv);

}