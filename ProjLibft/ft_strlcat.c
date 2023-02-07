/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:49:35 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/03 15:28:17 by math42           ###   ########.fr       */
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
