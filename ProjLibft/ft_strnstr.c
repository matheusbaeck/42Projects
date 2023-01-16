/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:03:02 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/13 16:21:15 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0'
			&& i + j < (int)len)
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return ((char *)str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
