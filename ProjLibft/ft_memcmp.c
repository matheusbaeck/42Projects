/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:24:01 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/09 22:36:23 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	index;

	index = 0;
	while (index < n
		&& ((unsigned char *)s1)[index] == ((unsigned char *)s2)[index])
		index++;
	return (((unsigned char *)s1)[index] - ((unsigned char *)s2)[index]);
}
