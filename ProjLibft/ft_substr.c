/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:53:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/07 20:06:03 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new_len;
	size_t	max_str_len;
	char	*s2;

	max_str_len = 39;
	if (strlen(s) > start)
	{
		s += start;
		new_len = strlen(s);
		if (new_len >= len)
			new_len = len;
		else if (new_len > max_str_len)
			new_len = max_str_len;
			s2 = malloc(new_len + 1 * sizeof(char));
		if (!(s2))
			return (0);
		if (strlcpy(s2, s, new_len + 1) != strlen(s))
			return (0);
	}
	else
		return (0);
	return (s2);
}

int	main(void)
{
	char	*str;
	size_t	i;
	str = ft_substr("1234567891234567890123456789023456789", 3, 50);
	i = strlen(str);
	return (0);
}
