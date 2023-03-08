#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

char	*ft_anytoa(va_list arg_list, char format)
{
	char	*(*fptr)(va_list);

	if (format == 'd' || format == 'i')
		fptr = ft_d;
	return ((*fptr)(arg_list));
}

int	ft_print(char *s)
{
	int	index;

	while (s[index])
	{
		write(1, &s[index], 1);
		index++;
	}
	return (index);
}

char	*ft_is_format(va_list arg_list, char format)
{
	char	*formats;

	formats = "cspdiuxX%";
	if (!ft_strchr(formats, format))
		return (0);
	else if (format == 'c' || format == 's')
		return (char *s = va_arg(arg_list, char *), s);
	else
		return (ft_anytoa(arg_list, format));
	return (0);
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
				str = ft_is_format(arg_list, format[i]);
			else
				return (0);
		}
		else if (format[i])
			j += ft_print(&format[i]);
		i++;
	}
	va_end(arg_list);
	return (j);
}
