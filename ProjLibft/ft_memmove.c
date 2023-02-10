/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:06:02 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/10 03:51:00 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (!(!dst || !src) && len > 0)
	{
		if (src > dst)
		{
			while (i < (int)len)
			{
				((char *)dst)[i] = ((const char *)src)[i];
				i++;
			}
		}
		else
		{
			i = len - 1;
			while (i >= 0)
			{
				((char *)dst)[i] = ((const char *)src)[i];
				i--;
			}
		}
	}
	return (dst);
}
