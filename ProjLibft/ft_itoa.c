/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:36:50 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/16 17:35:46 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(char *str, int nb)
{
	char	un;

	if (nb != -2147483648)
	{
		if (nb >= 0)
		{
			un = (nb % 10) + '0';
			nb = (nb / 10);
			if (nb != 0)
				ft_putnbr(nb);
			write (1, &un, 1);
		}
		else
		{
			write(1, "-", 1);
			ft_putnbr(nb);
		}
	}
	else
		write(1, "-2147483648", 11);
}

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
		ft_putnr(s, n);
	return (s);
}
