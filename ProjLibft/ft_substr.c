/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:53:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/16 22:36:08 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*s2;

	i = 0;
	s2 = ft_calloc(len, sizeof(char));
	if (s2 && ft_strlen(s + start) >= len)
	{
		while (i < len)
		{
			s2[i] = s[i];
			i++;
		}
		s2[len] = '\0';
		return (s2);
	}
	return (0);
}
