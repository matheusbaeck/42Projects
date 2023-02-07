/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:47:27 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/04 14:44:05 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (*s && s[i])
	{
		if (s[i] == (char) c)
		{
			s += i;
			i = 1;
		}
		else
			i++;
	}
	if (c == '\0')
		s += i;
	if (*s != c)
		return (0);
	return ((char *) s);
}
