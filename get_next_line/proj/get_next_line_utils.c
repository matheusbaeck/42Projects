/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:34:59 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/24 05:08:18 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h"
#include <unistd.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (index < (n - 1)
		&& ((unsigned char *)s)[index] != (unsigned char)c)
	{
		index++;
	}
	s += index;
	if (*((unsigned char *)s) == (unsigned char)c)
		return ((void *)s);
	else
		return (0);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dst || src)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}

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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	if (!(src[i]))
	{
		dst[i] = src[i];
		return (ft_strlen(dst));
	}
	while (i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
		if (!(src[i]))
		{
			dst[i] = '\0';
			return (ft_strlen(dst));
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(len_s1 > SIZE_T_MAX) && !(len_s2 > SIZE_T_MAX))
	{
		s3 = malloc((len_s1 + len_s2 + 1) * sizeof(char));
		if (!s3)
			return (0);
		if (ft_strlcpy(s3, s1, len_s1 + 1) == ft_strlen(s3)
			&& ft_strlcpy(&s3[len_s1], s2, len_s2 + 1)
			== ft_strlen(&s3[len_s1]))
		{
			//free((char *)s1);
			//free((char *)s2);
			return (s3);
		}
		else
			free(s3);
	}
	return (0);
}
