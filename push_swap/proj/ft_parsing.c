/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:50:42 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/04/03 16:40:45 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_str_count(char *argv)
{
	int	count;
	int	iter;

	count = 0;
	iter = 0;
	while (argv[iter])
	{
		if (ft_isdigit(argv[iter]))
		{
			if (count == 0 || argv[iter - 1] == ' ')
				count++;
		}
		iter++;
	}
	return (count);
}

unsigned int	ft_itou(int nb)
{
	unsigned int	u;

	u = 0;
	if (nb == INT_MIN)
		u = UINT_MAX;
	else if (nb < 0)
		u += INT_MAX + nb * -1;
	else if (nb > 0)
		u += nb;
	return (nb);
}

int	ft_check_duplicity(int *numbers)
{
	static int	positiv_registry[UINT_MAX];
	int			i;

	i = -1;
	while (numbers[++i])
	{
		if (positiv_registry[ft_itou(numbers[i])] == 0)
			positiv_registry[ft_itou(numbers[i])] = 42;
		else
			return (0);
	}
	return (1);
}

int	ft_check_isalldigit(int argc, char **argv)
{
	int	j;
	int	i;

	j = 1;
	while (j < argc)
	{
		i = -1;
		while (argv[++i])
		{
			if (!ft_isdigit(argv[j][i])
				&& (argv[j][i] == ' ' || argv[j][i] == '-' || argv[j][i] == '+'))
				if (!ft_isdigit(argv[j][i + 1]))
					return (0);
		}
		j++;
	}
	return (1);
}

int	*ft_get_numbers(int argc, int count, char **argv)
{
	char	**str;
	int		*numbers;
	int		arg_counter;
	int		index_str;
	int		index_nbr;

	numbers = calloc(count + 1, sizeof(*numbers));
	if (!numbers)
		return (0);
	arg_counter = 1;
	index_str = 0;
	index_nbr = 0;
	while (arg_counter++ < argc)
	{
		str = ft_split(argv[arg_counter - 1], ' ');
		if (!str)
			return (0);
		while (str[index_str])
			numbers[index_nbr++] = ft_atoi(str[index_str++]);
		index_str = 0;
	}
	if (!ft_check_duplicity(numbers))
		return (0);
	return (numbers);
}
