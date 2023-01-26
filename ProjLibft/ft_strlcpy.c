/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:51:24 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/26 17:29:22 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
		if (!(src[i]))
			return (ft_strlen(src));
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

int main() {
	char dst[23] = "kkkkkkkkkkkkkkkkkkkkkk";
	char src[6] = "lorem";
	int n = 15;
	int r = ft_strlcpy(dst, src, n);
	return 0;
}