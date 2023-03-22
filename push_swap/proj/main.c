/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 07:39:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/22 22:41:04 by mamagalh@st      ###   ########.fr       */
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
			return (printf("\nduplicated number %d  \n", numbers[i]), 0);
	}
	return (1);
}

int	ft_check_isalldigit(char *argv)
{
	int	i;

	i = -1;
	while (argv[++i])
	{
		if (!ft_isdigit(argv[i]) && argv[i] != ' ' && argv[i] != '-')
			return (0);
	}
	return (1);
}

int	*ft_get_numbers(char *argv)
{
	char	**str;
	int		*numbers;
	int		i;

	if (!ft_check_isalldigit(argv))
		return (0);
	numbers = calloc(ft_str_count(argv) + 1, sizeof(*numbers));
	if (!numbers)
		return (0);
	str = ft_split(argv, ' ');
	if (!str)
		return (0);
	i = -1;
	while (str[++i])
		numbers[i] = ft_atoi(str[i]);
	free(str);
	if (!ft_check_duplicity(numbers))
		return (0);
	printf("total numbers readed %d\n\n", i);
	return (numbers);
}

void ft_algorythm(int **stacks, int *end)
{
	// int a = 0;
	// int b = 1;
	int count = 0;
	int	*middle;

	middle = ft_middle(stacks, 0, end);
	while (++count < 10)
	{

		printf("%d %d %d %d %d", middle[0], middle[1], middle[2], middle[3], middle[4]);
		// ft_swap(stacks, a, end, 0);
		// ft_swap(stacks, b, end, 0);
		// ft_swap(stacks, a, end, 2);
		// ft_push(stacks, a, end, 0);
		// ft_push(stacks, b, end, 0);
		// ft_push(stacks, a, end, 2);
		// ft_rotate(stacks, a, end, 0);
		// ft_rotate(stacks, b, end, 0);
		// ft_rotate(stacks, a, end, 2);
		// ft_rev_rotate(stacks, a, end, 0);
		// ft_rev_rotate(stacks, b, end, 0);
		// ft_rev_rotate(stacks, a, end, 2);
	}
}

int	main(void)
{
	int argc = 2;
	char *argv[2] = {""," -2147483647 -2147483648 -1 1 2 3 4 5"};
	int	*a;
	int	*b;
	int	end[2];
	int	*stacks[2];

	if (argc > 2)
		return (0);
	//printf("\n\ntotal number to read  %d\n",ft_str_count(argv[1]));
	end[0] = ft_str_count(argv[1]);
	printf("%d", end[0]);
	end[1] = 0;
	a = ft_get_numbers(argv[1]);
	b = calloc(end[0] + 1, sizeof(*b));
	stacks[0] = a;
	stacks[1] = b;
	ft_algorythm(stacks, end);
	//printf("\n\ntotal number to read  %d\n",ft_str_count(argv[1]));
	//printf("%p", ft_get_numbers(argv[1]));
	return (0);
}

int	ft_is_orded(int **stacks, int stack, int *end,int mod)
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
