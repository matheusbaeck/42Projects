/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:30:07 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/31 18:35:24 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
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
