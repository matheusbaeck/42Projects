/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:20:37 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/09 02:25:13 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_anytoa(va_list arg_list, char format)
{
	int	(*fptr)(va_list);

	if (format == 'p')
		fptr = ft_p;
	else if (format == 'd' || format == 'i')
		fptr = ft_d;
	else if (format == 'u')
		fptr = ft_u;
	else if (format == 'x')
		fptr = ft_x;
	else if (format == 'X')
		fptr = ft_xx;
	return ((*fptr)(arg_list));
}

int	ft_is_format(va_list arg_list, char format)
{
	char	*formats;
	char	*s;
	char	c;

	formats = "cspdiuxX%";
	if (!ft_strchr(formats, format))
		return (0);
	else if (format == 'c')
	{
		c = (char)va_arg(arg_list, int);
		write(1, &c, 1);
		return (1);
	}
	else if (format == 's')
	{
		s = va_arg(arg_list, char *);
		return (ft_print(s));
	}
	else
		return (ft_anytoa(arg_list, format));
	return (0);
}

int	ft_print(char *s)
{
	int	index;

	index = 0;
	while (s[index])
	{
		write(1, &s[index], 1);
		index++;
	}
	return (index);
}

int	ft_printf(char *format, ...)
{
	va_list	arg_list;
	int		i;
	int		j;
	char	*str;

	va_start(arg_list, format);
	i = 0;
	j = 0;
	while (format[i])
	{
		if (format[i] == '%' && ++i)
		{
			if (format[i])
				j += ft_is_format(arg_list, format[i]);
			else
				return (0);
		}
		else if (format[i])
		{
			write(1, &format[i], 1);
			j++;
		}
		i++;
	}
	va_end(arg_list);
	return (j);
}
