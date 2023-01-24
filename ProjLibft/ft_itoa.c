/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:36:50 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/24 17:25:31 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_powten(int pow_n)
{
	int	n;

	n = 10;
	if (pow_n < 0)
		return (0);
	if (pow_n == 1)
		return (1);
	while (pow_n > 0)
	{
		n *= 10;
		pow_n--;
	}
	return (n);
}

static void	ft_nattoa(char *str, int n, size_t pow_n)
{
	size_t	str_i;
	char	append;

	str_i = ft_strlen(str);
	while (n > 0)
	{
		append = (n - (n % (ft_powten(pow_n - 1)))) / (ft_powten(pow_n - 1));
		n = n - (n % (ft_powten(pow_n - 1)));
		str[str_i] = (char)append + '0';
		pow_n--;
	}
}

char	*ft_itoa(int n)
{
	size_t	pow_n;
	int		n_count;
	int		sign;
	char	*str;

	pow_n = 0;
	n_count = n;
	while (pow_n++ && n_count > 0)
		n_count = n_count / 10;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		str = malloc((pow_n + 2) * sizeof(char));
		str[0] = '-';
		if (n == (-2147483648))
			str[1] = '2';
	}
	else
		str = malloc((pow_n + 1) * sizeof(char));
	if (!(str))
		return (0);
	ft_nattoa(str, n * sign, pow_n);
	return (str);
}
