/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:12:58 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/13 12:54:33 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// duvida, se tem mais de um null no fim, vai retornar
// o primeiro, isso 'e um erro

char	*strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		if (s[i] || s[i] == (char) c)
		{
			s += i;
		}
		else
			s++;
	}
	return ((char *) s);
}
