/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:47:27 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/09 21:01:46 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (*s && s[i] != '\0')
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
