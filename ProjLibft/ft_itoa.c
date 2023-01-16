/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:36:50 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/16 17:26:53 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	char	*s;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 10)
	{
		n = n % 10;
		i++;
	}
	s = malloc(sizeof(char) * i);
	if (s)
		ft_putnr(s);
	return (s);
}
