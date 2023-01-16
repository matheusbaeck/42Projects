/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:47:27 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/13 12:55:48 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		if (*s == (char) c)
		{
			return ((char *) s);
		}
		s++;
	}
	return ((char *) s);
}
