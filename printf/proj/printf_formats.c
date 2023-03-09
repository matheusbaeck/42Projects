/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_formats.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:29:53 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/09 03:28:31 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_c(va_list arg_list)
{
	char	c;
	int		d;

	d = va_arg(arg_list, int);
	c = (char)d;
	return(ft_print(&c));
}

int	ft_p(va_list arg_list)
{
	unsigned int	p;

	p = va_arg(arg_list, unsigned int);
	write(1, "0x", 2);
	return(ft_puthex(p, 0, 'x'));
}

int	ft_d(va_list arg_list)
{
	int	n;

	n = va_arg(arg_list, int);
	return (ft_print(ft_itoa(n)));
}

int	ft_u(va_list arg_list)
{
	unsigned int	u;
	unsigned int	divisor;
	unsigned int	nb;
	char			c;
	int				j;

	u = va_arg(arg_list, unsigned int);
	divisor = 1;
	nb = 0;
	while (divisor <= UINT_MAX / 10 || (u - divisor) > 10)
		divisor *= 10;
	j = 0;
	while (u > 10)
	{
		nb += u % divisor;
		u -= (u % divisor);
		divisor /= 10;
		c = nb + '0';
		write(1, &c, 1);
	}
	return (j);
}

int	ft_puthex(int nb, int i, int format)
{
	if ((nb + 16) > 16)
	{
		i += ft_puthex(nb / 16, i, format);
		if (nb % 16 > 10)
		{
			if (format == 'X')
				nb = (nb % 16) - 10 + 'A';
			else
				nb = (nb % 16) - 10 + 'a';
		}
		else
			nb = nb % 16;
		write(1, &nb, 1);
		i++;
		return (i);
	}
	else
		return (i);
}

int	ft_x(va_list arg_list)
{
	int	n;

	n = va_arg(arg_list, int);
	return (ft_puthex(n, 0, 'x'));
}

int	ft_xx(va_list arg_list)
{
	int	n;

	n = va_arg(arg_list, int);
	return (ft_puthex(n, 0, 'X'));
}
