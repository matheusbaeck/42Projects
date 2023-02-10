/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:49:35 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/10 05:00:06 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	zero;

	i = 0;
	if (dstsize <= 0)
	{
		return (ft_strlen(src));
	}
	zero = ft_strlen(dst);
	if (!(src[i]))
	{
		dst[zero + i] = src[i];
		return (ft_strlen(dst));
	}
	while (zero + i < (dstsize - 1))
	{
		dst[zero + i] = src[i];
		i++;
		if (!(src[i]))
		{
			dst[zero + i] = src[i];
			return (ft_strlen(dst));
		}
	}
	while ((zero + i) < dstsize)
	{
		dst[zero + i] = '\0';
		i++;
	}
	return (ft_strlen(src) + zero);
}
