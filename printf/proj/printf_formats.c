/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_formats.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:29:53 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/08 05:56:03 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h"

char	*ft_d(va_list arg_list)
{
	int	n;

	n = va_arg(arg_list, int);
	return (ft_itoa(n));
}

UINT_MAX

char	*ft_u(va_list arg_list)
{
	unsigned int	u;
	unsigned int	temp;
	unsigned int	nb;
	char			str[12];
	int				index;

	u = va_arg(arg_list, unsigned int);
	tem = 1;
	nb = 0;
	while (temp <= UINT_MAX / 10 || (u - temp) > 10)
		temp *= 10;
	index = 0;
	while (u > 10)
	{
		nb += u % temp;
		u -= (u % temp);
		temp /= 10;
		str[index] = nb + '0';
	}
	str[index + 1] = '\0';
	return (str);
}



char	*ft_x(va_arg arg_list)
{
	if ((nb / 16) > 16)
	{
		ft_hextoa(int nb)
	}
}
