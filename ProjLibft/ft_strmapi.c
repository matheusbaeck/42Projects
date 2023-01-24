/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:31:34 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/24 14:53:34 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n_pieces;
	size_t	size_s2;
	size_t	i;
	char	**piece;
	char	*s2;

	n_pieces = ft_strlen(s);
	if (!(piece = malloc(sizeof(char *) * n_pieces)))
		return (0);
	i = 0;
	size_s2 = 0;
	while (i < n_pieces)
	{
		piece[i] = f(i, s[i]);
		size_s2 += ft_strlen(piece[i]);
		i++;
	}
	i = 0;
	if (!(s2 = malloc(sizeof(char) * size_s2)))
		return (0);
	while (i < n_pieces)
	{
		ft_strlcat(s2, piece[i], ft_strlen(*piece));
		free(piece[i]);
		i++;
	}
	free(piece);
	return (s2);
}
