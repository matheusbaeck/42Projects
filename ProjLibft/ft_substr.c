/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:53:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/08 17:30:24 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new_len;
	char	*s2;

	if (ft_strlen(s) > start)
	{
		s += start;
		new_len = ft_strlen(s);
		if (new_len >= len)
			new_len = len;
	}
	// else if (ft_strlen(s) == start)
	// 	return (0);
	else
		new_len = ft_strlen(s);
	s2 = malloc(new_len + 1 * sizeof(char));
	if (!(s2))
		return (0);
	if (ft_strlcpy(s2, s, new_len + 1) != ft_strlen(s))
		return (0);
	ft_strlcpy(s2, s, new_len + 1);
	return (s2);
}
