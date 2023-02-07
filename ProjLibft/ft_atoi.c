/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:31:02 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/06 18:46:28 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	index;

	index = 0;
	sign = 1;
	num = 0;
	while (!(ft_isdigit(str[index])) && !(ft_isalpha(str[index]))
		&& str[index] != '\e'
		&& str[index] != '-' && str[index] != '+' && str[index])
		index++;
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		sign *= -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		num *= 10;
		num += (str[index] - '0');
		index++;
	}
	return (num * sign);
}
