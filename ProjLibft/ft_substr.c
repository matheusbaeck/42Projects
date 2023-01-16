/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:53:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/16 15:26:55 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*s2;

	s2 = ft_calloc(len, sizeof(char));
	if (s2 && ft_strlen(s + start) >= len)
	{
		while (i < len)
		{
			s2[i] = s1[i];
		}
		s2[len] = '\0';
		return (s2);
	}
	return (0);
}
