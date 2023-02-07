/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:50:27 by marvin            #+#    #+#             */
/*   Updated: 2023/01/17 10:50:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	initial;
	size_t	final;
	char	*s2;

	initial = ft_strlen(set);
	final = ft_strlen(s1) - ft_strlen(set);
	if (ft_strncmp(s1, set, ft_strlen(set) - 1)
		&& ft_strncmp(&s1[final], set, ft_strlen(set)))
	{
		s2 = ft_calloc(initial - final, sizeof(char));
		ft_strlcpy(s2, &s1[final - initial], ft_strlen(set));
	}
	return (s2);
}
