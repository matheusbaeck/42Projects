/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:55:48 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/13 17:26:53 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_calloc(size_t count, size_t size)
{
	char			*v;
	unsigned int	i;

	i = (count * size);
	v = malloc(count * size);
	if (v)
	{
		while (i--)
		{
			*v = '\0';
		}
		return (v);
	}
	return (0);
}
