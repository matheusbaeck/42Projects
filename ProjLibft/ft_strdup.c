/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:30:07 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/13 17:42:42 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	unsigned int	i;
	char			*s2;

	s2 = ft_calloc(ft_strlen(s1), sizeof(char));
	i = 0;
	while (i < ft_strlen(s1))
	{
		s2[i] = s1[i];
	}
	return (s2);
}
