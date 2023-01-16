/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:00:10 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/12 09:49:49 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *((unsigned int *)src + i))
	{
		ft_memset(dst, *((unsigned int *)src + i), 1);
		i++;
	}
	return (dst);
}
