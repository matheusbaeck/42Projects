/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:04:35 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/17 01:20:22 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_c(va_list arg_list)
{
	char	c;
	int		d;

	d = va_arg(arg_list, int);
	c = (char)d;
	return (ft_print(&c));
}

int	ft_print(char *s)
{
	int	index;

	index = 0;
	if (!s)
	{
		if (write(1, "(null)", 6) < 0)
			return (-1);
		return (6);
	}
	while (s[index])
	{
		if (write(1, &s[index], 1) < 0)
			return (-1);
		index++;
	}
	return (index);
}

int	ft_putbaseu(unsigned long int nb, char *set, int base, int i)
{
	if (i == 0 && nb == 0 && ++i)
	{
		if (write(1, &set[0], 1) < 0)
			return (-1);
	}
	else if (nb > 0)
	{
		i = ft_putbase(nb / base, set, base, i + 1);
		nb = nb % base;
		if (write(1, &set[nb], 1) < 0)
			return (-1);
		return (i);
	}
	return (i);
}

int	ft_putbase(long long int nb, char *set, int base, int i)
{
	static int	sign;

	if (nb < 0)
		sign = -1;
	else if (nb > 0)
		sign = 1;
	else if (i == 0 && nb == 0 && ++i)
	{
		if (write(1, &set[0], 1) < 0)
			return (-1);
		sign = 0;
	}
	if (nb != 0)
	{
		i = ft_putbase(nb / base, set, base, i + 1);
		nb = (nb % base) * sign;
		if (i < 0 || write(1, &set[nb], 1) < 0)
			return (-1);
		return (i);
	}
	else if (sign < 0 && ++i)
		if (write(1, "-", 1) < 0)
			return (-1);
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (((unsigned char)s[i]))
	{
		if (((unsigned char)s[i]) == ((unsigned char)c))
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
		s += i;
	if (*s != (unsigned char)c)
		return (0);
	return ((char *)s);
}
