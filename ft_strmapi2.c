/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:31:34 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/16 22:20:25 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n_pieces;
	unsigned int	size_s2;
	unsigned int	i;
	char			**piece;
	char			*s2;

	n_pieces = ft_strlen(s);
	piece = malloc(sizeof(char *) * n_pieces);
	if (!(piece))
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
	s2 = malloc(sizeof(char) * size_s2);
	if (!(s2))
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
