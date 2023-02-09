/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:10:21 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/09 22:33:13 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	index;

	index = 0;
	while (index < n && ((unsigned char *)s)[index] != (unsigned char)c)
	{
		index++;
	}
	s += index;
	return ((void *)s);
}
