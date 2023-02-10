/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:31:50 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/10 04:47:38 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = malloc((ft_strlen(s1) + ft_strlen(s2) - 1) * sizeof(char));
	if (!s3)
		return (0);
	if (ft_strlcat(s3, s1, ft_strlen(s1)) == ft_strlen(s3)
		&& ft_strlcat(s3, s2, ft_strlen(s2)) == ft_strlen(s3))
		return (s3);
	return (0);
}
