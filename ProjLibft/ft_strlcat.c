/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:49:35 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/13 11:25:57 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i > dstsize - 1)
	{
		dst[ft_strlen(dst)] = src[i];
	}
	dst[ft_strlen(dst)] = '\0';
	return (ft_strlen(src) + dstsize);
}
