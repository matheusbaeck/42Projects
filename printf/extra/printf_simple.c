/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_simple.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:44:12 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/18 07:31:00 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	(*putany(void *var))(char c)
{
	if (c == 'd')
		return (ft_itoa(int n));
	else if (c == s)
		return (ft_putstr());
	return (0);
}


int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	int		i;

	i = 0;
	va_start(arg_list, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (i++ && !(format[i]))
				break ;
			if (format[i] == 'd')
			{
				int	d = va_arg(arg_list, int);
				printf("%d", d);
			}
			else if (format[i] == 'f')
			{
				double f = va_arg(arg_list, double);
				printf("%f", f);
			}
			i++;
		}
		else
		{
			printf("%c", format[i]);
			i++;
		}
	}
	va_end(arg_list);
	return (0);
}

int	main(void)
{
	ft_printf("hello! %d uash%fushos", 2, 2.5);
	return (0);
}
