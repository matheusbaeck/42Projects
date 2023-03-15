/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_formats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:29:53 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/15 03:24:57 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	void	*p;

	p = va_arg(arg_list, void *);
	if (p == NULL)
	{
		write(1, "0x0", 2);
		return (3);
	}
	else
		write(1, "0x", 2);
	return(2 + ft_putbase((unsigned long int)p, "0123456789abcdef", 16));
}

int	ft_d(va_list arg_list)
{
	int	n;

	n = va_arg(arg_list, int);
	return (ft_putbase(n, "0123456789", 10));
}

int	ft_u(va_list arg_list)
{
	unsigned int	u;

	u = va_arg(arg_list, unsigned int);
	return (ft_putbase(u, "0123456789", 10));
}

int	ft_putbase(unsigned long int nb, char *set, int base)
{
	static int	i;
	char		c;

	i = 0;
	if (i == 0 && nb == 0 && ++i)
		write(1, &set[0], 1);
	if (nb > 0)
	{
		ft_putbase(nb / base, set, base);
		nb = nb % base;
		c = set[nb];
		write(1, &c, 1);
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
	return (ft_putbase(n, "0123456789abcdef", 16));
}

int	ft_xx(va_list arg_list)
{
	int	n;

	n = va_arg(arg_list, int);
	return (ft_putbase(n, "0123456789ABCDEF", 16));
}
