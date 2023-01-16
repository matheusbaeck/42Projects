/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:31:50 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/13 18:52:49 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = ft_calloc((ft_strlen(s1) + ft_strlen(s2) - 1), sizeof(char));
	if (ft_strlcat(s3, s1, ft_strlen(s1)) == ft_strlen(s1)
		&& ft_strlcat(s3, s2, ft_strlen(s2)) == ft_strlen(s2))
		return (s3);
	return (0);
}
